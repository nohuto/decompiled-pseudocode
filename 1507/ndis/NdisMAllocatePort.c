/*
 * XREFs of NdisMAllocatePort @ 0x1C0039C60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  PNDIS_PORT_CHARACTERISTICS v2; // rbx
  int v4; // r13d
  unsigned int v5; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v7; // rsi
  KIRQL v8; // r9
  unsigned int v9; // edx
  KIRQL v10; // dl
  _BYTE *v11; // r15
  unsigned int v12; // ebp
  __int64 v13; // rcx
  _BYTE *v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // ebp
  __int64 v19; // rbx
  _BYTE *v20; // rax
  _BYTE *v21; // r14
  char v22; // r14
  int v23; // ebp
  _QWORD *v24; // rax
  unsigned int v25; // r8d
  unsigned int v26; // edx
  __int64 *v27; // rdx
  __int64 v28; // rax
  KIRQL v30; // [rsp+70h] [rbp+8h]

  v2 = PortCharacteristics;
  v4 = 0;
  if ( (unsigned __int8)byte_1C008531E >= 4u )
    WPP_SF_q(0xAu, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)NdisMiniportHandle);
  if ( !ndisReferenceMiniport((__int64)NdisMiniportHandle, 0x61u) )
  {
    v5 = -1073676286;
    goto LABEL_47;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6F70444Eu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v7 + 4) = 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  v9 = *((_DWORD *)NdisMiniportHandle + 697) + 1;
  v30 = v8;
  *((_DWORD *)NdisMiniportHandle + 464) = 2359399;
  if ( v9 > 0x2AAAAAA )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
    *((_DWORD *)NdisMiniportHandle + 464) = 0;
LABEL_9:
    v10 = v8;
LABEL_10:
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v10);
LABEL_6:
    v5 = -1073741670;
LABEL_44:
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x61u);
LABEL_45:
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    goto LABEL_47;
  }
  v11 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 347);
  v12 = *((_DWORD *)NdisMiniportHandle + 696);
  if ( v11 && (v13 = 0LL, v12) )
  {
    v14 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 347);
    while ( *v14 == 0xFF )
    {
      v4 += 8;
      v13 = (unsigned int)(v13 + 1);
      ++v14;
      if ( (unsigned int)v13 >= v12 )
        goto LABEL_16;
    }
    v15 = (unsigned __int8)v11[v13];
    v16 = 1;
    v17 = 0;
    while ( (v15 & v16) != 0 )
    {
      v16 *= 2;
      if ( (unsigned int)++v17 >= 8 )
        goto LABEL_16;
    }
    v11[v13] = v16 | v15;
    v4 += v17;
  }
  else
  {
LABEL_16:
    if ( 8 * v12 + 1 >= 0x1000000 )
    {
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      *((_DWORD *)NdisMiniportHandle + 464) = 0;
      goto LABEL_9;
    }
    v18 = v12 + 1;
    v19 = v18 - 1;
    if ( 8 * v18 + 1 < (unsigned int)v19 )
    {
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      *((_DWORD *)NdisMiniportHandle + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v8);
      v5 = -1073676267;
      goto LABEL_44;
    }
    v20 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6F70444Eu);
    v21 = v20;
    if ( !v20 )
    {
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      *((_DWORD *)NdisMiniportHandle + 464) = 0;
      v10 = v30;
      goto LABEL_10;
    }
    if ( v11 )
    {
      memmove(v20, v11, v18 - 1);
      v21[v19] = 1;
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      *v20 = 3;
      v4 = 1;
    }
    v8 = v30;
    v2 = PortCharacteristics;
    *((_QWORD *)NdisMiniportHandle + 347) = v21;
    *((_DWORD *)NdisMiniportHandle + 696) = v18;
  }
  v2->PortNumber = v4;
  v22 = 0;
  *(_OWORD *)(v7 + 3) = *(_OWORD *)&v2->Header.Type;
  *(_OWORD *)(v7 + 5) = *(_OWORD *)&v2->MediaConnectState;
  *(_OWORD *)(v7 + 7) = *(_OWORD *)&v2->RcvLinkSpeed;
  *(_OWORD *)(v7 + 9) = *(_OWORD *)&v2->RcvControlState;
  if ( (v2->Flags & 1) != 0 )
  {
    *((_DWORD *)v7 + 17) = *((_DWORD *)NdisMiniportHandle + 838);
    *((_DWORD *)v7 + 18) = *((_DWORD *)NdisMiniportHandle + 839);
    *((_DWORD *)v7 + 19) = *((_DWORD *)NdisMiniportHandle + 840);
    *((_DWORD *)v7 + 20) = *((_DWORD *)NdisMiniportHandle + 841);
  }
  v23 = 0;
  v24 = (_QWORD *)*((_QWORD *)NdisMiniportHandle + 345);
  if ( v24 == (_QWORD *)((char *)NdisMiniportHandle + 2760) )
  {
LABEL_38:
    v27 = (__int64 *)v24[1];
    v28 = *v27;
    *v7 = *v27;
    v7[1] = (__int64)v27;
    if ( *(__int64 **)(v28 + 8) != v27 )
      __fastfail(3u);
    *(_QWORD *)(v28 + 8) = v7;
    *v27 = (__int64)v7;
    ++*((_DWORD *)NdisMiniportHandle + 697);
    v5 = 0;
    *((_DWORD *)v7 + 4) = 2;
  }
  else
  {
    v25 = *((_DWORD *)v7 + 7);
    while ( 1 )
    {
      v26 = *((_DWORD *)v24 + 7);
      if ( v26 == v25 )
        break;
      if ( v26 <= v25 )
      {
        v24 = (_QWORD *)*v24;
        if ( v24 != (_QWORD *)((char *)NdisMiniportHandle + 2760) )
          continue;
      }
      goto LABEL_38;
    }
    v23 = -1073741270;
    v22 = 1;
    v5 = -1073741270;
  }
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  *((_DWORD *)NdisMiniportHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v8);
  if ( v23 )
  {
    if ( !v22 )
      goto LABEL_45;
    goto LABEL_44;
  }
LABEL_47:
  if ( (unsigned __int8)byte_1C008531E >= 4u )
    WPP_SF_qdD(11LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, NdisMiniportHandle, v5, v4);
  return v5;
}
