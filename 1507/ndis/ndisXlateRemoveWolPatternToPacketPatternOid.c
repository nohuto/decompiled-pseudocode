/*
 * XREFs of ndisXlateRemoveWolPatternToPacketPatternOid @ 0x1C00CC890
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C00CA370 (ndisOidPrePMRemoveWOLPattern.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisXlateRemoveWolPatternToPacketPatternOid(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  __int64 OidSourceHandle; // rax
  unsigned __int8 v10; // cl
  __int64 v11; // r9
  __int64 *v12; // rax
  char v13; // dl
  __int64 *v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rsi
  unsigned int v17; // r12d
  _DWORD *v18; // rax
  _DWORD *v19; // r14
  unsigned int v20; // ecx
  __int64 v21; // rax
  _DWORD *v22; // rax
  unsigned int v23; // ecx

  v3 = 0;
  *a3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_q(0x72u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a2);
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, 0x20uLL);
  *(_DWORD *)v8 = *(_DWORD *)(a2 + 32);
  v8[1] = *(_QWORD *)(a2 + 40);
  *((_DWORD *)v8 + 4) = *(_DWORD *)(a2 + 48);
  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v10 = *(_BYTE *)(a1 + 32);
  v11 = OidSourceHandle;
  if ( v10 > 6u || v10 == 6 && *(_BYTE *)(a1 + 33) >= 0x14u )
  {
    v12 = *(__int64 **)(a1 + 968);
    v13 = 1;
  }
  else
  {
    v12 = *(__int64 **)(a1 + 960);
    v13 = 0;
  }
  if ( !v12 )
    goto LABEL_26;
  do
  {
    v14 = v12;
    if ( *((_DWORD *)v12 + 10) == *(_DWORD *)(a2 + 152) )
      break;
    v12 = (__int64 *)*v12;
    v14 = 0LL;
  }
  while ( v12 );
  if ( !v14 )
    goto LABEL_26;
  v15 = v14 + 1;
  if ( v14 == (__int64 *)-8LL )
    goto LABEL_26;
  do
  {
    v16 = v15 - 1;
    if ( v15[2] == v11 )
      break;
    v15 = (_QWORD *)*v15;
    v16 = 0LL;
  }
  while ( v15 );
  if ( !v16 )
    goto LABEL_26;
  if ( !v13 )
  {
    v17 = v16[14] + 24 + v16[16];
    v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x7877444Eu);
    v19 = v22;
    if ( !v22 )
      goto LABEL_21;
    memset(v22, 0, v17);
    *v19 = v16[12];
    v23 = v16[14];
    v19[2] = v23;
    v19[3] = v23 + 24;
    v19[4] = v16[16];
    memmove(v19 + 6, v16 + 18, v23);
    v21 = (unsigned int)v16[15];
    goto LABEL_25;
  }
  if ( v16[15] != 1 )
  {
LABEL_26:
    ExFreePoolWithTag(v8, 0);
    v3 = -1073676267;
    goto LABEL_27;
  }
  v17 = v16[53] + 24 + v16[55];
  v18 = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x7877444Eu);
  v19 = v18;
  if ( !v18 )
  {
LABEL_21:
    ExFreePoolWithTag(v8, 0);
LABEL_4:
    v3 = -1073741670;
LABEL_27:
    *a3 = 1;
    return v3;
  }
  memset(v18, 0, v17);
  *v19 = v16[14];
  v20 = v16[53];
  v19[2] = v20;
  v19[3] = v20 + 24;
  v19[4] = v16[55];
  memmove(v19 + 6, (char *)v16 + (unsigned int)v16[52] + 48, v20);
  v21 = (unsigned int)v16[54];
LABEL_25:
  memmove((char *)v19 + (unsigned int)v19[3], (char *)v16 + v21 + 48, (unsigned int)v19[4]);
  v8[3] = v19;
  *(_DWORD *)(a2 + 32) = -50265852;
  *(_QWORD *)(a2 + 40) = v19;
  *(_DWORD *)(a2 + 48) = v17;
  *(_QWORD *)(a2 + 144) = v8;
  return v3;
}
