/*
 * XREFs of ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003ED38
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003EA98 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x180072C00 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  int v9; // ebx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( !*(_DWORD *)(a1 + 64) )
    return v2;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
    if ( !*(_BYTE *)(v11 + 213) )
      goto LABEL_8;
    v6 = *(_DWORD *)(a2 + 24);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
      break;
    v2 = 0;
    if ( v7 <= *(_DWORD *)(a2 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 24)) = v11;
      *(_DWORD *)(a2 + 24) = v7;
    }
    else
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v11);
      v9 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
      v2 = v9;
      if ( v9 < 0 )
        goto LABEL_12;
    }
LABEL_8:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
      return v2;
  }
  v9 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v2 = -2147024362;
LABEL_12:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x128u);
  return v2;
}
