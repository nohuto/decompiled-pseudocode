/*
 * XREFs of ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C028742C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027940 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00281B0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ulCharsetToCodePage @ 0x1C0148FB4 (ulCharsetToCodePage.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C01C1568 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0287220 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C028724C (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 */

void __fastcall MAPPER::vEmergency(MAPPER *this)
{
  struct _FONTHASH **v1; // rax
  _DWORD *v3; // rdx
  unsigned __int8 v4; // di
  _DWORD *v5; // rdx
  struct PFE *i; // rax
  int v7; // eax
  struct PFE *v8; // rsi
  struct PFE *v9; // rax
  int v10; // eax
  _DWORD *v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF
  struct PFE *v15; // [rsp+58h] [rbp+10h] BYREF

  v1 = gpPFTPublic;
  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v12[0] = gpPFTPublic;
  v4 = 1;
  v14 = 1;
  *v3 = 0;
  v5 = (_DWORD *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *v5 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  *((_DWORD *)this + 63) &= ~0x80u;
  *((_DWORD *)this + 45) = -2;
  v12[1] = *v1;
  v13 = 0LL;
  for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v12); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v12) )
  {
    v8 = i;
    if ( !i )
      break;
    v15 = i;
    if ( (unsigned int)MAPPER::bNearMatch(this, &v15, &v14, 1) )
    {
      v4 = v14;
      MAPPER::vSetBest(this, v8, 0, v14);
      v7 = *((_DWORD *)this + 46);
      if ( !v7 )
        goto LABEL_9;
      *((_DWORD *)this + 45) = v7;
    }
  }
  if ( !*((_QWORD *)this + 25) )
  {
    v9 = gppfeMapperDefault;
    *((_QWORD *)this + 25) = gppfeMapperDefault;
    *((_DWORD *)this + 52) = *((_DWORD *)v9 + 22);
  }
LABEL_9:
  v10 = ulCharsetToCodePage(v4);
  *v11 |= v10 << 8;
}
