/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x140726E84
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpGxDrawRectangle @ 0x140127A94 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 *     LogFwStat @ 0x140727310 (LogFwStat.c)
 */

void __fastcall AnFwpFadeAnimationTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // edi
  char v5; // r14
  char v6; // r13
  char v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // esi
  __int64 v15; // r9
  unsigned int v16; // edx
  __int64 v17; // r10
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r11
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 m; // r9
  unsigned int v26; // eax
  __int64 v27; // r10
  unsigned int v28; // eax
  unsigned int v29; // ecx
  int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // r10
  __int64 i; // r9
  unsigned __int8 v35; // al
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 j; // r9
  unsigned __int8 v40; // al
  unsigned int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 k; // r9
  unsigned __int8 v45; // al
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 n; // r9
  unsigned int v50; // eax
  __int64 v51; // r10
  unsigned int v52; // eax
  unsigned int v53; // ecx
  int v54; // [rsp+20h] [rbp-58h]
  __int64 v55; // [rsp+28h] [rbp-50h]
  __int64 v56; // [rsp+30h] [rbp-48h]
  __int64 v57; // [rsp+38h] [rbp-40h] BYREF
  __int64 v58; // [rsp+40h] [rbp-38h]
  _BYTE v59[8]; // [rsp+48h] [rbp-30h] BYREF

  BgpFwAcquireLock();
  v4 = 0;
  if ( byte_140328C51 )
  {
    LogFwStat(1LL, 6LL, 0LL);
    LogFwStat(1LL, 4LL, 0LL);
    v5 = byte_1402F4E82;
    v6 = byte_1402F4E80;
    v7 = byte_1402F4E81;
    v8 = qword_1402F4E88;
    v9 = qword_1402F4EE8;
    v57 = qword_1402F4E78;
    v54 = dword_1402F4E74;
    v55 = qword_1402F4EB0;
    v58 = qword_1402F4EC0;
    v56 = qword_1402F4EF0;
    v10 = 10 * (dword_1402F4E70 - dword_1402F4E70 / (unsigned int)(dword_1402F9F94 - dword_1402F4E74));
    v14 = 0;
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      if ( !v5 )
      {
        v31 = qword_1402F4EB8;
        v32 = 0;
        v33 = *(_QWORD *)(v12 + 24);
        for ( i = *(_QWORD *)(qword_1402F4EB8 + 24); v32 < *(_DWORD *)(v31 + 12); ++v32 )
        {
          v35 = *(_BYTE *)(v32 + i);
          if ( v35 )
          {
            v36 = (v10 * v35) >> 10;
            *(_BYTE *)(v32 + v33) = v36;
            if ( v36 )
              ++v14;
          }
        }
        v11 = v55;
      }
      if ( !v6 )
      {
        v37 = *(_QWORD *)(v8 + 24);
        v38 = 0LL;
        for ( j = *(_QWORD *)(v11 + 24); (unsigned int)v38 < *(_DWORD *)(v8 + 12); v38 = (unsigned int)(v38 + 1) )
        {
          v40 = *(_BYTE *)(v38 + v37);
          if ( v40 )
          {
            v41 = (v10 * v40) >> 10;
            *(_BYTE *)(v38 + j) = v41;
            if ( v41 )
              ++v4;
          }
        }
      }
      v30 = 0;
      if ( !v7 )
      {
        v42 = *(_QWORD *)(v9 + 24);
        v43 = 0LL;
        for ( k = *(_QWORD *)(v13 + 24); (unsigned int)v43 < *(_DWORD *)(v9 + 12); v43 = (unsigned int)(v43 + 1) )
        {
          v45 = *(_BYTE *)(v43 + v42);
          if ( v45 )
          {
            v46 = (v10 * v45) >> 10;
            *(_BYTE *)(v43 + k) = v46;
            if ( v46 )
              ++v30;
          }
        }
      }
    }
    else
    {
      if ( !v5 )
      {
        v15 = qword_1402F4EB8;
        v16 = 0;
        v17 = *(_QWORD *)(v12 + 24);
        v18 = *(_QWORD *)(qword_1402F4EB8 + 24);
        if ( *(_DWORD *)(qword_1402F4EB8 + 12) )
        {
          do
          {
            if ( *(_DWORD *)(v16 + v18) )
            {
              v19 = (v10 * *(unsigned __int8 *)(v16 + v18)) >> 10;
              *(_BYTE *)(v16 + v17) = v19;
              if ( v19 )
                ++v14;
              v20 = v16 + 2;
              v21 = (v10 * *(unsigned __int8 *)(v16 + 1 + v18)) >> 10;
              *(_BYTE *)(v16 + 1 + v17) = v21;
              if ( v21 )
                ++v14;
              v22 = (v10 * *(unsigned __int8 *)(v20 + v18)) >> 10;
              *(_BYTE *)(v20 + v17) = v22;
              if ( v22 )
                ++v14;
            }
            v16 += 4;
          }
          while ( v16 < *(_DWORD *)(v15 + 12) );
          v13 = v56;
        }
        v11 = v55;
      }
      if ( !v6 )
      {
        v23 = *(_QWORD *)(v8 + 24);
        v24 = 0LL;
        for ( m = *(_QWORD *)(v11 + 24); (unsigned int)v24 < *(_DWORD *)(v8 + 12); v24 = (unsigned int)(v24 + 4) )
        {
          if ( *(_DWORD *)(v24 + v23) )
          {
            v26 = (v10 * *(unsigned __int8 *)(v24 + v23)) >> 10;
            *(_BYTE *)(v24 + m) = v26;
            if ( v26 )
              ++v4;
            v27 = (unsigned int)(v24 + 2);
            v28 = (v10 * *(unsigned __int8 *)((unsigned int)(v24 + 1) + v23)) >> 10;
            *(_BYTE *)((unsigned int)(v24 + 1) + m) = v28;
            if ( v28 )
              ++v4;
            v29 = (v10 * *(unsigned __int8 *)(v27 + v23)) >> 10;
            *(_BYTE *)(v27 + m) = v29;
            if ( v29 )
              ++v4;
          }
        }
      }
      v30 = 0;
      if ( !v7 )
      {
        v47 = *(_QWORD *)(v9 + 24);
        v48 = 0LL;
        for ( n = *(_QWORD *)(v13 + 24); (unsigned int)v48 < *(_DWORD *)(v9 + 12); v48 = (unsigned int)(v48 + 4) )
        {
          if ( *(_DWORD *)(v48 + v47) )
          {
            v50 = (v10 * *(unsigned __int8 *)(v48 + v47)) >> 10;
            *(_BYTE *)(v48 + n) = v50;
            if ( v50 )
              ++v30;
            v51 = (unsigned int)(v48 + 2);
            v52 = (v10 * *(unsigned __int8 *)((unsigned int)(v48 + 1) + v47)) >> 10;
            *(_BYTE *)((unsigned int)(v48 + 1) + n) = v52;
            if ( v52 )
              ++v30;
            v53 = (v10 * *(unsigned __int8 *)(v51 + v47)) >> 10;
            *(_BYTE *)(v51 + n) = v53;
            if ( v53 )
              ++v30;
          }
        }
      }
    }
    LogFwStat(0LL, 4LL, 0LL);
    LogFwStat(1LL, 3LL, 0LL);
    if ( !v5 )
    {
      BgpGxDrawRectangle(v58, (__int64)&v57);
      v5 = v14 == 0;
    }
    if ( !v6 )
    {
      if ( !v54 && !v4 || (BgpGxDrawRectangle(v55, (__int64)&xmmword_1402F4E90), !v4) )
        v6 = 1;
    }
    if ( !v7 )
    {
      if ( !v54 && !v30 || (BgpGxDrawRectangle(v56, (__int64)&xmmword_1402F4EC8), !v30) )
        v7 = 1;
    }
    LogFwStat(0LL, 3LL, 0LL);
    LogFwStat(0LL, 6LL, v59);
    if ( v14 || v30 || v4 )
    {
      byte_1402F4E80 = v6;
      byte_1402F4E81 = v7;
      dword_1402F4E70 = v10 / 0xA;
      dword_1402F4E74 = v54 + 1;
      byte_1402F4E82 = v5;
    }
    else
    {
      byte_140328C51 = 0;
      KeCancelTimer(&stru_1403404A0);
      KeSetEvent(&stru_1403404E0, 0, 0);
    }
  }
  BgpFwReleaseLock();
}
