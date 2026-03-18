/*
 * XREFs of ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A4BF0
 * Callers:
 *     NtGdiRemoveMergeFont @ 0x1C026B260 (NtGdiRemoveMergeFont.c)
 * Callees:
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0129894 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 */

__int64 __fastcall XDCOBJ::bRemoveMergeFont(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  __int64 v9; // rcx
  int v10; // r8d
  char v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h]

  v13 = a2;
  v2 = 0;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 2488LL);
  v5 = v4;
  if ( v4 )
  {
    while ( !v2 )
    {
      v6 = *v4;
      if ( *(_DWORD *)(*v4 + 136LL) == (_DWORD)a2 && (v7 = *(_DWORD *)(v6 + 144), v8 = 0, v7) )
      {
        v9 = v6 + 216;
        while ( *(_DWORD *)(*(_QWORD *)v9 + 96LL) != HIDWORD(v13) )
        {
          ++v8;
          v9 += 8LL;
          if ( v8 >= v7 )
            goto LABEL_8;
        }
        v2 = 1;
      }
      else
      {
LABEL_8:
        v5 = v4;
        v4 = (_QWORD *)v4[1];
      }
      if ( !v4 )
      {
        if ( !v2 )
          return v2;
        break;
      }
    }
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v12, *(struct PFT **)(*v4 + 128LL));
    --*(_DWORD *)(*v4 + 64LL);
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v12, (struct PFF *)*v4, 0LL, v10 != 0 ? 64 : 32);
    if ( v2 )
    {
      if ( v4 == *(_QWORD **)(*(_QWORD *)a1 + 2488LL) )
        *(_QWORD *)(*(_QWORD *)a1 + 2488LL) = v4[1];
      else
        v5[1] = v4[1];
      Win32FreePool(v4);
    }
  }
  return v2;
}
