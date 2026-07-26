/*
 * XREFs of ndisIfEnumerateNsiObjects @ 0x1C00C67BC
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     NdisIfGetNetLuidFromInterfaceIndex @ 0x1C003D790 (NdisIfGetNetLuidFromInterfaceIndex.c)
 */

__int64 __fastcall ndisIfEnumerateNsiObjects(NET_LUID *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  NDIS_STATUS NetLuidFromInterfaceIndex; // edi
  NET_LUID *v7; // r14
  int Value; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // eax
  int v19; // ebx
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // ebx
  NET_IFINDEX v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  unsigned int v31; // edx
  _QWORD v33[14]; // [rsp+28h] [rbp-29h] BYREF
  NET_LUID pNetLuid; // [rsp+C8h] [rbp+77h] BYREF

  v3 = 0;
  NetLuidFromInterfaceIndex = 0;
  *a3 = 0;
  if ( a2 < 0x30 )
    return (unsigned int)-1073741789;
  if ( *((_DWORD *)&a1[3].Info + 1) > a2 - 32 )
    return (unsigned int)-1073741811;
  v7 = a1 + 4;
  memset(v33, 0, sizeof(v33));
  Value = a1->Value;
  LODWORD(v33[1]) = 0;
  v33[2] = &NPI_MS_NDIS_MODULEID;
  v33[4] = 0x100000001LL;
  v9 = Value - 1;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v24 = *((_DWORD *)&a1->Info + 1);
      LODWORD(v33[3]) = 3;
      NetLuidFromInterfaceIndex = NdisIfGetNetLuidFromInterfaceIndex(v24, &pNetLuid);
      if ( NetLuidFromInterfaceIndex < 0 )
        goto LABEL_44;
      v25 = 40;
      v7->Value = pNetLuid.Value;
      LODWORD(v33[6]) = 40;
      v33[5] = v7;
      while ( 1 )
      {
        v26 = v33[13];
        v27 = LODWORD(v33[13]) * v25;
        *((_DWORD *)&a1[1].Info + 1) = v33[13];
        v28 = (v27 + 7) & 0xFFFFFFF8;
        *((_DWORD *)&a1[2].Info + 1) = v28;
        v3 = v28 + 8 * v26;
        if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
          break;
        LODWORD(v33[10]) = 8;
        v33[9] = (char *)v7 + v28;
        NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
        if ( NetLuidFromInterfaceIndex != 261 )
          break;
        v25 = v33[6];
      }
      goto LABEL_43;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v21 = *((_DWORD *)&a1->Info + 1);
      v22 = 8;
      LODWORD(v33[6]) = 8;
      LODWORD(v33[3]) = 4;
      LODWORD(v7->Value) = v21;
      v33[5] = v7;
      while ( 1 )
      {
        v23 = LODWORD(v33[13]) * v22;
        *((_DWORD *)&a1[1].Info + 1) = v33[13];
        v3 = (v23 + 7) & 0xFFFFFFF8;
        if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
          break;
        NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
        if ( NetLuidFromInterfaceIndex != 261 )
          break;
        v22 = v33[6];
      }
      goto LABEL_43;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v18 = *((_DWORD *)&a1->Info + 1);
      v19 = 8;
      LODWORD(v33[6]) = 8;
      LODWORD(v33[3]) = 5;
      LODWORD(v7->Value) = v18;
      v33[5] = v7;
      while ( 1 )
      {
        v20 = LODWORD(v33[13]) * v19;
        *((_DWORD *)&a1[1].Info + 1) = v33[13];
        v3 = (v20 + 7) & 0xFFFFFFF8;
        if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
          break;
        NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
        if ( NetLuidFromInterfaceIndex != 261 )
          break;
        v19 = v33[6];
      }
      goto LABEL_43;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        return (unsigned int)-1073741811;
      LODWORD(v33[3]) = 7;
      NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
      if ( NetLuidFromInterfaceIndex >= 0 )
      {
        v14 = v33[13];
        if ( LODWORD(v33[13]) )
        {
          v33[5] = v7;
          LODWORD(v33[6]) = 4;
          while ( 1 )
          {
            v15 = (4 * v14 + 7) & 0xFFFFFFF8;
            *((_DWORD *)&a1[1].Info + 1) = v14;
            LODWORD(a1[2].Value) = v15;
            v3 = v15 + 1624 * v14;
            if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
              break;
            LODWORD(v33[8]) = 1624;
            v33[7] = (char *)v7 + v15;
            NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
            if ( NetLuidFromInterfaceIndex != 261 )
              break;
            v14 = v33[13];
          }
LABEL_43:
          *((_DWORD *)&a1[3].Info + 1) = v3;
        }
      }
    }
    else
    {
      LODWORD(v33[3]) = 6;
      NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
      if ( NetLuidFromInterfaceIndex >= 0 )
      {
        v16 = v33[13];
        if ( LODWORD(v33[13]) )
        {
          v33[5] = v7;
          LODWORD(v33[6]) = 16;
          while ( 1 )
          {
            *((_DWORD *)&a1[1].Info + 1) = v16;
            v17 = (16 * v16 + 7) & 0xFFFFFFF8;
            LODWORD(a1[2].Value) = v17;
            v3 = v17 + 528 * v16;
            if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
              break;
            LODWORD(v33[8]) = 528;
            v33[7] = (char *)v7 + v17;
            NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
            if ( NetLuidFromInterfaceIndex != 261 )
              break;
            v16 = v33[13];
          }
          goto LABEL_43;
        }
      }
    }
  }
  else
  {
    LODWORD(v33[3]) = 1;
    NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
    if ( NetLuidFromInterfaceIndex >= 0 )
    {
      v29 = v33[13];
      if ( LODWORD(v33[13]) )
      {
        v33[5] = v7;
        LODWORD(v33[6]) = 8;
        while ( 1 )
        {
          *((_DWORD *)&a1[1].Info + 1) = v29;
          if ( 568LL * v29 + ((8 * v29 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + ((656 * v29 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) > 0xFFFFFFFF )
            break;
          LODWORD(a1[2].Value) = 0;
          v30 = (8 * v29 + 7) & 0xFFFFFFF8;
          *((_DWORD *)&a1[2].Info + 1) = v30;
          v31 = v30 + ((656 * v29 + 7) & 0xFFFFFFF8);
          LODWORD(a1[3].Value) = v31;
          v3 = v31 + 568 * v29;
          if ( *((_DWORD *)&a1[3].Info + 1) < v3 )
            break;
          LODWORD(v33[10]) = 656;
          v33[9] = (char *)v7 + v30;
          LODWORD(v33[12]) = 568;
          v33[11] = (char *)v7 + v31;
          NetLuidFromInterfaceIndex = NsiEnumerateObjectsAllParametersEx(v33);
          if ( NetLuidFromInterfaceIndex != 261 )
            break;
          v29 = v33[13];
        }
        goto LABEL_43;
      }
    }
  }
LABEL_44:
  if ( !NetLuidFromInterfaceIndex )
    *a3 = v3 + 32;
  return (unsigned int)NetLuidFromInterfaceIndex;
}
