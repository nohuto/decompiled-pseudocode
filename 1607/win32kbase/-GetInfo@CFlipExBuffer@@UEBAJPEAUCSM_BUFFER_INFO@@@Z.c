/*
 * XREFs of ?GetInfo@CFlipExBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C001E270
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00794F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CFlipExBuffer::GetInfo(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // eax
  _OWORD *i; // rdx
  __m128d v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v11; // rax
  const wchar_t **v12; // rax
  const wchar_t **v13; // rsi
  wchar_t *v14; // rax
  const unsigned __int16 *v15; // rax
  __m256i ClientId; // [rsp+30h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+A0h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+28h] BYREF

  *(_DWORD *)a2 = 2;
  v2 = 0;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
  *((_QWORD *)a2 + 16) = *((_QWORD *)this + 20);
  *((_QWORD *)a2 + 17) = *((_QWORD *)this + 37);
  *((_QWORD *)a2 + 18) = 0LL;
  *((_QWORD *)a2 + 19) = 0LL;
  *((_DWORD *)a2 + 40) = 0;
  *((_DWORD *)a2 + 41) = *((_DWORD *)this + 62);
  v5 = *((_DWORD *)this + 62);
  if ( v5 )
  {
    if ( v5 > 1 )
    {
      v11 = *((unsigned int *)this + 97);
      if ( (_DWORD)v11 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)ClientId.m256i_i8 = v11;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, (PCLIENT_ID)&ClientId) >= 0 )
        {
          ProcessInformationLength = 0;
          if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
            && ProcessInformationLength >= 0x10 )
          {
            v12 = (const wchar_t **)Win32AllocPoolZInit(ProcessInformationLength + 2LL);
            v13 = v12;
            if ( v12 )
            {
              if ( ZwQueryInformationProcess(
                     ProcessHandle,
                     ProcessImageFileNameWin32,
                     v12,
                     ProcessInformationLength,
                     0LL) >= 0 )
              {
                v14 = wcsrchr(v13[1], 0x5Cu);
                if ( v14 )
                  v15 = v14 + 1;
                else
                  v15 = v13[1];
                StringCchCopyW((unsigned __int16 *)a2 + 456, 0x40uLL, v15);
              }
              Win32FreePool(v13);
            }
          }
          ZwClose(ProcessHandle);
        }
      }
    }
    *((_DWORD *)a2 + 40) = *(_DWORD *)(*((_QWORD *)this + 29) + 16LL);
    for ( i = (_OWORD *)*((_QWORD *)this + 29); i != (_OWORD *)((char *)this + 232); i = *(_OWORD **)i )
    {
      v7 = (__m128d)i[2];
      v8 = v2 + 7LL;
      *(_OWORD *)ClientId.m256i_i8 = i[1];
      ++v2;
      *(__m128d *)&ClientId.m256i_u64[2] = v7;
      v9 = 3 * v8;
      *(_OWORD *)((char *)a2 + 8 * v9) = *(_OWORD *)&ClientId.m256i_u64[1];
      *((_QWORD *)a2 + v9 + 2) = *(_OWORD *)&_mm_unpackhi_pd(v7, v7);
    }
  }
  return 0LL;
}
