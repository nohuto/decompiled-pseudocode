/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003240
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003150 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400092C0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edi
  __int64 v11; // rsi
  char *v12; // rdx
  char *v14; // rdx
  PROPVARIANT pvar; // [rsp+28h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  PROPVARIANT v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]

  v7 = a2;
  v8 = 0LL;
  a5 = 0LL;
  v9 = dword_140054F60;
  if ( (dword_140054F60 & 1) == 0 )
  {
    v9 = dword_140054F60 | 1;
    dword_140054F60 |= 1u;
    xmmword_140054F24 = PKEY_Endpoint_LFX_FailCount;
    dword_140054F34 = 9;
    xmmword_140054F38 = PKEY_Endpoint_GFX_FailCount;
    dword_140054F48 = 8;
    xmmword_140054F4C = PKEY_Endpoint_EFX_FailCount;
    dword_140054F5C = 31;
  }
  if ( (v9 & 2) == 0 )
  {
    dword_140054F60 = v9 | 2;
    xmmword_140054ED4 = PKEY_Endpoint_LFX_ExceptionCount;
    dword_140054EE4 = 33;
    xmmword_140054EE8 = PKEY_Endpoint_GFX_ExceptionCount;
    dword_140054EF8 = 34;
    xmmword_140054EFC = PKEY_Endpoint_EFX_ExceptionCount;
    dword_140054F0C = 35;
  }
  if ( a2 )
  {
    pvar = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &a5);
    if ( v10 < 0 )
    {
LABEL_12:
      PropVariantClear(&pvar);
      v8 = a5;
      goto LABEL_13;
    }
    v11 = 20 * v7;
    if ( a4 )
      v12 = (char *)&unk_140054EC0;
    else
      v12 = (char *)&unk_140054F10;
    v10 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(a5, &v12[v11], &pvar);
    if ( a3 )
    {
      if ( (_WORD)pvar == 19 )
      {
        if ( !(_DWORD)v16 )
          goto LABEL_12;
      }
      else if ( !(_WORD)pvar )
      {
        goto LABEL_12;
      }
      LOWORD(pvar) = 19;
      if ( !a4 )
      {
        LODWORD(v16) = 0;
        goto LABEL_31;
      }
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a5 + 40LL))(
        a5,
        &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
        &v18);
      if ( (_WORD)v18 != 19 || (_DWORD)v19 != 1 || (unsigned int)v16 > 1 )
        LODWORD(v16) = v16 - 1;
      PropVariantClear(&v18);
    }
    else
    {
      if ( (_WORD)pvar == 19 )
        LODWORD(v8) = v16;
      else
        LOWORD(pvar) = 19;
      LODWORD(v16) = v8 + 10;
    }
    v14 = (char *)&unk_140054EC0;
    if ( a4 )
    {
LABEL_32:
      v10 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)a5 + 48LL))(a5, &v14[v11], &pvar);
      goto LABEL_12;
    }
LABEL_31:
    v14 = (char *)&unk_140054F10;
    goto LABEL_32;
  }
  v10 = 0;
LABEL_13:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v10;
}
