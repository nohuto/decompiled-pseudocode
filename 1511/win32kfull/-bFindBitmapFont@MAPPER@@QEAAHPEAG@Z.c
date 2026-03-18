/*
 * XREFs of ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C00204E4
 * Callers:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00205C8 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C0016D20 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C001D8E8 (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C001E298 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

__int64 __fastcall MAPPER::bFindBitmapFont(MAPPER *this, unsigned __int16 *a2)
{
  struct _HASHBUCKET *v5; // rax
  unsigned int v6; // ebx
  _QWORD *i; // rcx
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax
  int v11; // edx
  struct _FONTSUB *v12; // rax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)this + 63) & 0x10000000) != 0 )
    return 0LL;
  v13[0] = gpPFTPublic;
  v13[1] = *gpPFTPublic;
  if ( FHOBJ::bValid((FHOBJ *)v13) )
  {
    v5 = FHOBJ::pbktSearch((FHOBJ *)v13, a2, 0LL, 0LL, 0);
    v6 = 1;
    if ( v5
      || (v12 = pfsubAlternateFacename(a2)) != 0LL
      && (*((_BYTE *)v12 + 195) & 1) != 0
      && (v5 = FHOBJ::pbktSearch((FHOBJ *)v13, (const unsigned __int16 *)v12 + 65, 0LL, 0LL, 0)) != 0LL )
    {
      for ( i = (_QWORD *)*((_QWORD *)v5 + 1); i; i = (_QWORD *)*i )
      {
        v8 = *(_QWORD *)(i[1] + 32LL);
        if ( (*(_DWORD *)(v8 + 48) & 2) != 0 )
        {
          v9 = (*((_DWORD *)this + 63) & 2) != 0 ? *(__int16 *)(v8 + 56) : *(__int16 *)(v8 + 60) + *(__int16 *)(v8 + 62);
          v10 = *((_DWORD *)this + 41);
          if ( v10 == v9 || v10 == 2 && v9 == 3 )
          {
            v11 = *((_DWORD *)this + 42);
            if ( !v11 || v11 == *(__int16 *)(v8 + 76) )
              return v6;
          }
        }
      }
    }
  }
  return 0;
}
