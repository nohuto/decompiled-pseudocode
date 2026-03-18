/*
 * XREFs of ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18016F548
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801457A0 (-SetTemporaryConfiguration@CInteraction@@UEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

TLG_STATUS __fastcall CInteractionProcessor::SetTemporaryConfiguration(
        _BYTE *a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        int a5)
{
  _BYTE *v5; // rbx
  int v10; // r10d
  int v11; // ecx
  __int64 v12; // r14
  int v13; // edx
  int v14; // edx
  TLG_STATUS result; // eax
  char *v16; // rdi
  char v17; // r9
  char v18; // r8
  unsigned int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  GUID pActivityId; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE *v29; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  int *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  int *v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  int *v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  int *v43; // [rsp+C0h] [rbp-40h]
  int v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+CCh] [rbp-34h]
  GUID *p_pActivityId; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  unsigned __int16 *p_Data2; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]
  unsigned __int8 *Data4; // [rsp+F0h] [rbp-10h]
  int v53; // [rsp+F8h] [rbp-8h]
  int v54; // [rsp+FCh] [rbp-4h]
  unsigned __int8 *v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  int *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  int *v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+12Ch] [rbp+2Ch]

  v5 = a1 + 860;
  if ( a3 )
    v5 = a1 + 896;
  v10 = -1;
  v11 = 0;
  v22 = -1;
  v12 = 3LL;
  if ( !a2 )
  {
    v10 = 0;
    v11 = 3;
    goto LABEL_9;
  }
  v13 = a2 - 1;
  if ( !v13 )
  {
    v10 = 1;
    v11 = 12;
    goto LABEL_9;
  }
  if ( v13 == 1 )
  {
    v10 = 2;
    v11 = 48;
LABEL_9:
    v22 = v10;
  }
  v14 = a5;
  result = a5 | ~v11;
  if ( v10 != -1 && (v5[12 * v10] != a4 || a4 && *(_DWORD *)&v5[12 * v10 + 4] != result) )
  {
    v5[12 * v10] = a4;
    *(_DWORD *)&v5[12 * v22 + 4] = result;
    *(_DWORD *)&v5[12 * v22 + 8] = v11;
    a1[144] |= 1u;
    a1[296] |= 1u;
    v14 = a5;
    v10 = v22;
  }
  if ( a3 == 1 )
  {
    a1[856] &= ~2u;
    v16 = a1 + 896;
    v17 = a1[856];
    do
    {
      v18 = *v16;
      v16 += 12;
      v17 ^= (v17 ^ (v17 | (2 * v18))) & 2;
      a1[856] = v17;
      --v12;
    }
    while ( v12 );
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v31 = &v29;
    v34 = &v23;
    v37 = &v24;
    v40 = &v22;
    v25 = a4;
    v43 = &v25;
    v29 = a1;
    v32 = 8;
    v23 = a2;
    v35 = 4;
    v24 = a3;
    v38 = 4;
    v41 = 4;
    v44 = 4;
    v19 = (unsigned __int8)v5[12 * v10];
    v48 = 0;
    v51 = 0;
    v54 = 0;
    v57 = 0;
    *(_DWORD *)&pActivityId.Data4[4] = a5 | ~v11;
    v55 = &pActivityId.Data4[4];
    pActivityId.Data1 = v19;
    *(_DWORD *)&pActivityId.Data2 = v14;
    *(_DWORD *)pActivityId.Data4 = v11;
    p_pActivityId = &pActivityId;
    v47 = 4;
    p_Data2 = &pActivityId.Data2;
    v50 = 4;
    Data4 = pActivityId.Data4;
    v53 = 4;
    v56 = 4;
    v20 = *(_DWORD *)&v5[12 * v10 + 4];
    v60 = 0;
    v27 = v20;
    v58 = &v27;
    v21 = ((unsigned __int8)a1[856] >> 1) & 1;
    v59 = 4;
    v63 = 0;
    v28 = v21;
    v61 = &v28;
    v62 = 4;
    return TlgWrite(
             (TraceLoggingHProvider)&pRelatedActivityId,
             &unk_1801C56EF,
             &pActivityId,
             (LPCGUID)(3LL * v10),
             0xDu,
             &pData);
  }
  return result;
}
