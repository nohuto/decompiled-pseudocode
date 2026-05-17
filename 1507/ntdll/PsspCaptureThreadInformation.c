/*
 * XREFs of PsspCaptureThreadInformation @ 0x180082EEC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1800674D0 (RtlGetExtendedContextLength.c)
 *     PsspDumpThread @ 0x180083200 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x1800833F8 (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x180094790 (ZwGetNextThread.c)
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
  int v17; // r12d
  __int64 **v18; // r14
  unsigned int i; // r12d
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v23; // rax
  int ExtendedContextLength; // eax
  int v25; // [rsp+28h] [rbp-69h]
  __int64 v26; // [rsp+58h] [rbp-39h] BYREF
  __int64 v27; // [rsp+60h] [rbp-31h]
  __int64 v28; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  __int64 v31; // [rsp+80h] [rbp-11h] BYREF
  int v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h] BYREF
  int v34; // [rsp+98h] [rbp+7h]
  __int64 v35; // [rsp+9Ch] [rbp+Bh]
  _QWORD v36[8]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v32 = a3 & 0x100;
  v6 = (v32 != 0 ? 8 : 0) | (a3 >> 7) & 8 | 0x40;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v6, 0LL, 0, &v28);
  v11 = v28;
  v12 = NextThread;
  v27 = v28;
  if ( NextThread != -2147483622 )
  {
    v13 = 1LL;
    do
    {
      if ( v12 < 0 )
        goto LABEL_34;
      if ( !v8 || *((_WORD *)v8 + 5) >= *((_WORD *)v8 + 4) )
      {
        v26 = 1LL;
        v29 = 0LL;
        v12 = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v26, 4096, 4);
        if ( v12 < 0 )
          goto LABEL_34;
        if ( v7 )
        {
          *v8 = (__int64)v29;
          v8 = v29;
        }
        else
        {
          v8 = v29;
          v7 = (__int64 **)v29;
        }
        LODWORD(v13) = 1;
        v23 = v26 - 16;
        *((_WORD *)v8 + 5) = 0;
        *((_WORD *)v8 + 4) = v23 >> 2;
        v11 = v28;
      }
      v9 += v13;
      *((_DWORD *)v8 + *((unsigned __int16 *)v8 + 5) + 3) = v11;
      *((_WORD *)v8 + 5) += v13;
      v14 = ZwGetNextThread(a2, v27, v6, 0LL, 0, &v28);
      v11 = v28;
      v12 = v14;
      v27 = v28;
      v13 = 1LL;
    }
    while ( v14 != -2147483622 );
    if ( !v9 )
      return 0LL;
    v15 = 0;
    LODWORD(v27) = 0;
    if ( v32 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4), v15 = v27, ExtendedContextLength < 0) )
      {
        v15 = 1232;
      }
    }
    *(_DWORD *)(a1 + 968) = v15;
    v16 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
    if ( v16 > 0xFFFFFFFF )
    {
      v12 = -1073741675;
    }
    else
    {
      v36[0] = (unsigned int)v16;
      v12 = NtCreateSection(&Handle, 983047LL, L"0", v36, 4, 0x8000000, 0LL);
      if ( v12 >= 0 )
      {
        v31 = 0LL;
        v26 = 0LL;
        v12 = ZwMapViewOfSection(Handle, -1LL, &v31, 0LL, 0LL, 0LL, &v26, 1, 0, 4);
        if ( v12 >= 0 )
        {
          v17 = 0;
          v18 = v7;
          v33 = v31;
          v34 = v26;
          v35 = 0LL;
          if ( v7 )
          {
            do
            {
              for ( i = 0; i < *((unsigned __int16 *)v18 + 5); ++i )
              {
                v28 = *((unsigned int *)v18 + i + 3);
                v20 = PsspDumpThread((unsigned int)&v33, a3, a4, v15, v25, v28);
                v12 = v20;
                if ( v20 == -1073741789 )
                  break;
                if ( v20 < 0 )
                {
                  NtUnmapViewOfSection(-1LL);
                  goto LABEL_33;
                }
              }
              if ( v12 < 0 )
                break;
              v18 = (__int64 **)*v18;
            }
            while ( v18 );
            v17 = HIDWORD(v35);
            v4 = v35;
          }
          NtUnmapViewOfSection(-1LL);
          PsspFreeLinkedHandleList(v7, v21);
          *(_QWORD *)(a1 + 944) = v4;
          *(_QWORD *)(a1 + 952) = Handle;
          *(_DWORD *)(a1 + 936) = v17;
          *(_QWORD *)(a1 + 960) = MEMORY[0x7FFE0014];
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
