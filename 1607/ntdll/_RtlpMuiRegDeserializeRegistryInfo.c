/*
 * XREFs of _RtlpMuiRegDeserializeRegistryInfo @ 0x180071F14
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C4C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegDeserializeRegistryInfo(_DWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r11
  __int64 v6; // r8
  char *v7; // rdx
  __int64 v8; // r8
  char *v9; // rdx
  __int64 v10; // r8
  char *v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // r8
  char *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx

  v3 = 0;
  v4 = a2;
  if ( !a3 || !a1 || a2 < 0xA8 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)a1 + 3) )
  {
    v6 = (unsigned int)a1[6];
    if ( a2 < (unsigned __int64)(v6 + 24) )
      return (unsigned int)-1073741811;
    v7 = (char *)a1 + (unsigned int)a1[6];
    *((_QWORD *)a1 + 3) = v7;
    if ( (unsigned int)v4 < (int)v6 + *(_DWORD *)v7 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v7 + 2) = v7 + 24;
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    v8 = (unsigned int)a1[8];
    if ( v4 < v8 + 32 )
      return (unsigned int)-1073741811;
    v9 = (char *)a1 + (unsigned int)a1[8];
    *((_QWORD *)a1 + 4) = v9;
    if ( (unsigned int)v4 < (int)v8 + *(_DWORD *)v9 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v9 + 2) = v9 + 32;
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL)
                                            + 2LL * *(unsigned __int16 *)(*((_QWORD *)a1 + 4) + 4LL);
  }
  if ( *((_QWORD *)a1 + 5) )
  {
    v10 = (unsigned int)a1[10];
    if ( v4 < v10 + 16 )
      return (unsigned int)-1073741811;
    v11 = (char *)a1 + (unsigned int)a1[10];
    *((_QWORD *)a1 + 5) = v11;
    if ( (unsigned int)v4 < (int)v10 + *(_DWORD *)v11 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v11 + 1) = v11 + 16;
  }
  if ( *((_QWORD *)a1 + 7) )
  {
    v14 = (unsigned int)a1[14];
    if ( v4 < v14 + 64 )
      return (unsigned int)-1073741811;
    v15 = (char *)a1 + (unsigned int)a1[14];
    *((_QWORD *)a1 + 7) = v15;
    if ( (unsigned int)v4 < (int)v14 + *(_DWORD *)v15 )
      return (unsigned int)-1073741811;
    *((_QWORD *)v15 + 3) = v15 + 64;
    *(_QWORD *)(*((_QWORD *)a1 + 7) + 16LL) = 0LL;
  }
  if ( *((_QWORD *)a1 + 16) )
  {
    v16 = (unsigned int)a1[32];
    if ( (unsigned int)v4 < (int)v16 + a1[37] )
      return (unsigned int)-1073741811;
    *((_QWORD *)a1 + 16) = (char *)a1 + v16;
  }
  if ( *((_QWORD *)a1 + 19) )
  {
    v17 = (unsigned int)a1[38];
    if ( (unsigned int)v4 < (int)v17 + a1[40] )
      return (unsigned int)-1073741811;
    *((_QWORD *)a1 + 19) = (char *)a1 + v17;
  }
  if ( *((_QWORD *)a1 + 17) )
  {
    v12 = (unsigned int)a1[34];
    if ( (unsigned int)v4 >= (int)v12 + a1[36] )
    {
      *((_QWORD *)a1 + 17) = (char *)a1 + v12;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
LABEL_22:
  *a1 = 1024;
  *a3 = a1;
  return v3;
}
