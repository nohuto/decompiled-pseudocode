/*
 * XREFs of PsspCaptureThreadInformation @ 0x18008B488
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180070810 (RtlGetExtendedContextLength.c)
 *     PsspDumpThread @ 0x18008B79C (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x18008B98C (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A6DF0 (ZwGetNextThread.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // r12d
  __int64 **v7; // r15
  __int64 *v8; // rsi
  unsigned int v9; // r14d
  int NextThread; // eax
  int v11; // ecx
  int v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // esi
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // r12d
  __int64 **v19; // r14
  unsigned int i; // r12d
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v24; // rax
  int ExtendedContextLength; // eax
  int v26; // [rsp+28h] [rbp-69h]
  __int64 v27; // [rsp+58h] [rbp-39h] BYREF
  __int64 v28; // [rsp+60h] [rbp-31h]
  __int64 v29; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v30; // [rsp+70h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  __int64 v32; // [rsp+80h] [rbp-11h] BYREF
  int v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h] BYREF
  int v35; // [rsp+98h] [rbp+7h]
  __int64 v36; // [rsp+9Ch] [rbp+Bh]
  __int64 v37; // [rsp+A8h] [rbp+17h]

  v4 = 0;
  v33 = a3 & 0x100;
  v6 = (v33 != 0 ? 8 : 0) | (a3 >> 7) & 8 | 0x40;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v6, 0LL, 0, &v29);
  v11 = v29;
  v12 = NextThread;
  v28 = v29;
  if ( NextThread != -2147483622 )
  {
    v13 = 1LL;
    do
    {
      if ( v12 < 0 )
        goto LABEL_34;
      if ( !v8 || *((_WORD *)v8 + 5) >= *((_WORD *)v8 + 4) )
      {
        v27 = 1LL;
        v30 = 0LL;
        v12 = ZwAllocateVirtualMemory(-1LL, &v30, 0LL, &v27, 4096, 4);
        if ( v12 < 0 )
          goto LABEL_34;
        if ( v7 )
        {
          *v8 = (__int64)v30;
          v8 = v30;
        }
        else
        {
          v8 = v30;
          v7 = (__int64 **)v30;
        }
        LODWORD(v13) = 1;
        v24 = v27 - 16;
        *((_WORD *)v8 + 5) = 0;
        *((_WORD *)v8 + 4) = v24 >> 2;
        v11 = v29;
      }
      v9 += v13;
      *((_DWORD *)v8 + *((unsigned __int16 *)v8 + 5) + 3) = v11;
      *((_WORD *)v8 + 5) += v13;
      v14 = ZwGetNextThread(a2, v28, v6, 0LL, 0, &v29);
      v11 = v29;
      v12 = v14;
      v28 = v29;
      v13 = 1LL;
    }
    while ( v14 != -2147483622 );
    if ( !v9 )
      return 0LL;
    v15 = 0;
    LODWORD(v28) = 0;
    if ( v33 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4), v15 = v28, ExtendedContextLength < 0) )
      {
        v15 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v15;
    v16 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
    if ( v16 > 0xFFFFFFFF )
    {
      v12 = -1073741675;
    }
    else
    {
      v37 = (unsigned int)v16;
      v12 = NtCreateSection(&Handle, 983047LL, L"0");
      if ( v12 >= 0 )
      {
        v32 = 0LL;
        v27 = 0LL;
        v12 = ZwMapViewOfSection(Handle, -1LL, &v32, 0LL, 0LL, 0LL, &v27, 1, 0, 4);
        if ( v12 >= 0 )
        {
          v17 = v32;
          v18 = 0;
          v19 = v7;
          v34 = v32;
          v35 = v27;
          v36 = 0LL;
          if ( v7 )
          {
            do
            {
              for ( i = 0; i < *((unsigned __int16 *)v19 + 5); ++i )
              {
                v29 = *((unsigned int *)v19 + i + 3);
                v21 = PsspDumpThread((unsigned int)&v34, a3, a4, v15, v26, v29);
                v12 = v21;
                if ( v21 == -1073741789 )
                  break;
                if ( v21 < 0 )
                {
                  NtUnmapViewOfSection(-1LL, v32);
                  goto LABEL_33;
                }
              }
              if ( v12 < 0 )
                break;
              v19 = (__int64 **)*v19;
            }
            while ( v19 );
            v17 = v32;
            v18 = HIDWORD(v36);
            v4 = v36;
          }
          NtUnmapViewOfSection(-1LL, v17);
          PsspFreeLinkedHandleList(v7, v22);
          *(_QWORD *)(a1 + 1000) = v4;
          *(_QWORD *)(a1 + 1008) = Handle;
          *(_DWORD *)(a1 + 992) = v18;
          *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
          return 0LL;
        }
LABEL_33:
        NtClose(Handle);
      }
    }
LABEL_34:
    PsspFreeLinkedHandleList(v7, v13);
    return (unsigned int)v12;
  }
  return 0LL;
}
