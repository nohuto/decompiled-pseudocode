/*
 * XREFs of ndisMiniportPreAddProtocolOffload @ 0x1C0099AD8
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C0099E60 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     ndisGetNewPatternEntryId @ 0x1C009A3E4 (ndisGetNewPatternEntryId.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C009A408 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisComparePMProtocolOffloads @ 0x1C009A484 (ndisComparePMProtocolOffloads.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C009A4E0 (ndisIsPMProtocolOffloadSupported.c)
 *     ndisPMPatternIdExist @ 0x1C00B20A4 (ndisPMPatternIdExist.c)
 */

__int64 __fastcall ndisMiniportPreAddProtocolOffload(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rdi
  _DWORD *v8; // rsi
  __int64 OidSourceHandle; // r12
  _QWORD *v10; // r14
  __int64 PMProtocolOffloadEntry; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int NewPatternEntryId; // eax
  _QWORD *v17; // rax
  unsigned int v18; // edx

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x5Du, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
  v8 = *(_DWORD **)(a2 + 40);
  *a3 = 1;
  if ( (unsigned __int8)ndisIsPMProtocolOffloadSupported((unsigned int)v8[3], a1) )
  {
    OidSourceHandle = ndisGetOidSourceHandle(a2);
    v10 = *(_QWORD **)(a1 + 976);
    if ( !v10 )
      goto LABEL_34;
    do
    {
      v5 = v10;
      if ( (unsigned __int8)ndisComparePMProtocolOffloads(v10 + 6, v8) )
        break;
      v10 = (_QWORD *)*v10;
      v5 = 0LL;
    }
    while ( v10 );
    if ( !v5 )
      goto LABEL_34;
    v17 = v5 + 1;
    if ( v5 == (_QWORD *)-8LL )
      goto LABEL_34;
    do
    {
      if ( v17[2] == OidSourceHandle )
        break;
      v17 = (_QWORD *)*v17;
    }
    while ( v17 );
    if ( !v17 )
    {
LABEL_34:
      if ( (v8[1] & 1) == 0 || (v18 = v8[37], v18 >= 0xFFFF) && !(unsigned __int8)ndisPMPatternIdExist() )
      {
        PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(v8);
        v14 = PMProtocolOffloadEntry;
        if ( PMProtocolOffloadEntry )
        {
          *(_QWORD *)(PMProtocolOffloadEntry + 24) = OidSourceHandle;
          *(_QWORD *)(a1 + 192) = PMProtocolOffloadEntry;
          if ( (v8[1] & 1) != 0 )
          {
            NewPatternEntryId = v8[37];
          }
          else if ( v5 )
          {
            NewPatternEntryId = *((_DWORD *)v5 + 49);
          }
          else
          {
            NewPatternEntryId = ndisGetNewPatternEntryId(a1 + 976, v12, v13, PMProtocolOffloadEntry);
          }
          v8[37] = NewPatternEntryId;
          *(_DWORD *)(v14 + 196) = NewPatternEntryId;
          *(_DWORD *)(v14 + 40) = NewPatternEntryId;
          if ( v5 )
          {
            *a3 = 1;
            *(_QWORD *)(v14 + 8) = v5 + 1;
          }
          else
          {
            *a3 = 0;
          }
        }
        else
        {
          v3 = -1073741670;
        }
        goto LABEL_15;
      }
      if ( (unsigned __int8)byte_1C0085315 >= 2u )
        WPP_SF_d(0x5Eu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, v18);
    }
    v3 = -1073676267;
  }
  else
  {
    v3 = -1073741637;
  }
LABEL_15:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qdD(0x5Fu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, (unsigned __int8)*a3, v3);
  return v3;
}
