/*
 * XREFs of SbpUpdateCacheWithCurrentImpl @ 0x18002EBE0
 * Callers:
 *     SbSelectProcedure @ 0x18002E9C0 (SbSelectProcedure.c)
 * Callees:
 *     SbGetContextDetailsByVersion @ 0x18002EDBC (SbGetContextDetailsByVersion.c)
 *     RtlGetVersion @ 0x18002EE50 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     SbpResolveBasedOnName @ 0x1800FEBF4 (SbpResolveBasedOnName.c)
 */

__int64 __fastcall SbpUpdateCacheWithCurrentImpl(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // r9d
  unsigned int v9; // edi
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned int v16; // esi
  _DWORD *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // [rsp+20h] [rbp-178h] BYREF
  _WORD v20[144]; // [rsp+30h] [rbp-168h] BYREF

  memset(v20, 0, 0x11CuLL);
  v19 = 0LL;
  if ( (int)RtlGetVersion(v20) < 0 || (unsigned int)SbGetContextDetailsByVersion(v20[2], v20[4], &v19) != 1 )
    return 0LL;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = 0LL;
  if ( !*v4 )
    return 1LL;
  v6 = v19;
  while ( 1 )
  {
    v7 = *(_QWORD *)&v4[2 * v5 + 2];
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 68);
      v9 = 0;
      if ( v8 )
      {
        while ( 2 )
        {
          v10 = 0;
          v11 = 8LL * v9;
          do
          {
            v12 = *(_QWORD *)(v7 + 16 * (v11 + v10) + 120) - *(_QWORD *)(v6 + 4);
            if ( !v12 )
              v12 = *(_QWORD *)(v7 + 16 * (v11 + v10) + 128) - *(_QWORD *)(v6 + 12);
            if ( !v12 )
            {
              v13 = v7 + ((unsigned __int64)v9 << 7);
              if ( !*(_QWORD *)(v13 + 80) && *(_DWORD *)(v13 + 88) == 2 )
                *(_QWORD *)(v13 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v13 + 72));
              *(_QWORD *)(a1 + 8 * v5 + 16) = v13 + 72;
              goto LABEL_16;
            }
            ++v10;
          }
          while ( v10 < 4 );
          if ( ++v9 < v8 )
            continue;
          break;
        }
      }
LABEL_16:
      v14 = *(_DWORD *)(v7 + 68);
      if ( v9 >= v14 )
      {
        v16 = 0;
        if ( v14 )
        {
          v17 = (_DWORD *)(v7 + 104);
          while ( !*v17 )
          {
            ++v16;
            v17 += 32;
            if ( v16 >= v14 )
              goto LABEL_25;
          }
          v18 = v7 + ((unsigned __int64)v16 << 7);
          if ( !*(_QWORD *)(v18 + 80) && *(_DWORD *)(v18 + 88) == 2 )
            *(_QWORD *)(v18 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v18 + 72));
          *(_QWORD *)(a1 + 8 * v5 + 16) = v18 + 72;
        }
LABEL_25:
        if ( v16 >= *(_DWORD *)(v7 + 68) )
          return 0LL;
      }
    }
    v4 = *(_DWORD **)(a2 + 24);
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *v4 )
      return 1LL;
  }
}
