/*
 * XREFs of bDeleteAllFlEntry @ 0x1C01293D8
 * Callers:
 *     GreEnableEUDC @ 0x1C013C928 (GreEnableEUDC.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C01295F4 (bUnloadEudcFont.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C012A904 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C012A9B0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     vLinkEudcPFEs @ 0x1C013DF9C (vLinkEudcPFEs.c)
 */

__int64 bDeleteAllFlEntry()
{
  __int64 v0; // rcx
  int v1; // edx
  int v2; // ecx
  _UNKNOWN **v3; // rbx
  int v4; // eax
  int v5; // r14d
  char v6; // di
  _UNKNOWN **v7; // rcx
  int v8; // r8d
  _QWORD *v9; // r9
  _QWORD *v10; // rdx
  int v11; // r11d
  __int64 v12; // rsi
  _QWORD *v13; // r11
  _QWORD **v14; // r11
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v22; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-18h]
  __int128 v24; // [rsp+30h] [rbp-10h] BYREF

  v23 = &v22;
  v22 = &v22;
  v24 = 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return 0LL;
  }
  else
  {
    vUnlinkAllEudcRFONTsAndPFEs(v0, 1LL);
    vUnlinkAllEudcFromRFONTList(v2, v1);
    if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      ++dword_1C032F1B8;
      v24 = *(_OWORD *)&gappfeSysEUDC;
      *(_OWORD *)&gappfeSysEUDC = 0uLL;
      Dst = 0;
    }
    v3 = (_UNKNOWN **)off_1C031EAB0;
    if ( off_1C031EAB0 != (_UNKNOWN *)&off_1C031EAB0 )
    {
      v4 = dword_1C03234C8;
      v5 = dword_1C03234C8;
      v6 = dword_1C03234D0;
      do
      {
        v7 = v3;
        v8 = 0;
        v3 = (_UNKNOWN **)*v3;
        v9 = v7[2];
        if ( v9 == v7 + 2 )
          goto LABEL_15;
        do
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
          v11 = *((_DWORD *)v10 + 4);
          if ( !v11 && (v6 & 2) != 0 || v11 == 1 && (v6 & 8) != 0 )
          {
            v12 = *v10;
            v13 = (_QWORD *)v10[1];
            if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v13 != v10 )
              __fastfail(3u);
            *v13 = v12;
            *(_QWORD *)(v12 + 8) = v13;
            v14 = (_QWORD **)v23;
            *v10 = &v22;
            v10[1] = v14;
            if ( *v14 != &v22 )
              __fastfail(3u);
            *v14 = v10;
            v23 = v10;
          }
          else
          {
            ++v8;
          }
        }
        while ( v9 != v7 + 2 );
        if ( v8 )
        {
          if ( *((_DWORD *)v7 + 25) != v8 )
          {
            ++*((_DWORD *)v7 + 26);
            *((_DWORD *)v7 + 25) = v8;
          }
        }
        else
        {
LABEL_15:
          v15 = (__int64)*v7;
          v16 = v7[1];
          if ( *((_UNKNOWN ***)*v7 + 1) != v7 || (_UNKNOWN **)*v16 != v7 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          Win32FreePool(v7);
          v6 = dword_1C03234D0;
          v4 = --dword_1C03234C8;
        }
      }
      while ( v3 != &off_1C031EAB0 );
      if ( v5 != v4 )
        ++dword_1C03234CC;
      if ( v4 )
        vLinkEudcPFEs(0LL);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v24 != 0 )
      bUnloadEudcFont(&v24);
    v17 = v22;
    while ( v17 != &v22 )
    {
      v18 = v17;
      v17 = (_QWORD *)*v17;
      v19 = *v18;
      v20 = (_QWORD *)v18[1];
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      bUnloadEudcFont(v18 + 4);
      Win32FreePool(v18);
    }
    return 1LL;
  }
}
