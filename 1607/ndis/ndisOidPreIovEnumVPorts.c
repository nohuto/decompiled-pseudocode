/*
 * XREFs of ndisOidPreIovEnumVPorts @ 0x1C0069D10
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00134F4 (ndisIovFindSwitchBySwitchId.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     ndisIovCopyVPortInfo @ 0x1C0027A68 (ndisIovCopyVPortInfo.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D914C (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  unsigned int v3; // r15d
  _BYTE *v4; // r13
  __int64 VFByVFId; // r12
  __int64 v6; // r14
  __int64 *v7; // rbx
  char v8; // si
  _DWORD *v9; // rax
  int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rsi
  _BYTE *OidSourceHandle; // rax
  __int64 *v15; // rbp
  bool v16; // zf
  KIRQL v17; // dl
  _QWORD **v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned int v21; // ebp
  __int64 v22; // rax
  _DWORD *v23; // rax
  unsigned int v24; // r12d
  _DWORD *v25; // rax
  _QWORD *v26; // r14
  _DWORD *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]
  unsigned int v36; // [rsp+A0h] [rbp+18h]
  __int64 *SwitchBySwitchId; // [rsp+A8h] [rbp+20h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v33 = *a1;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  VFByVFId = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  v7 = a1;
  v8 = 1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qq(0x35u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1, v1);
  *(_DWORD *)(v2 + 60) = 0;
  v9 = (_DWORD *)v7[4];
  if ( v9[1] == 12 )
  {
    *((_DWORD *)v7 + 10) = 0;
    if ( v9[12] >= 0x1Cu )
    {
      if ( v9[13] < 0x1Cu )
      {
        v9[17] = 28;
        *((_DWORD *)v7 + 10) = -1073676266;
      }
    }
    else
    {
      v9[17] = 28;
      *((_DWORD *)v7 + 10) = -1073676268;
    }
    if ( *((_DWORD *)v7 + 10) )
    {
      *(_DWORD *)(v7[4] + 60) = 0;
      *(_DWORD *)(v7[4] + 64) = 0;
      goto LABEL_72;
    }
    if ( !v1 )
    {
      v8 = 0;
      goto LABEL_72;
    }
    if ( ndisIovNicSwitchWithoutIovSupported(v1)
      || (v12 = *(_QWORD *)(v1 + 4672)) != 0 && *(_QWORD *)(v1 + 3616) != v11 && (*(_BYTE *)(v12 + 8) & 3) == 3 )
    {
      v13 = *(_QWORD *)(v2 + 40);
      *(_DWORD *)(v7[4] + 60) = v11;
      *(_DWORD *)(v7[4] + 64) = v10;
      OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
      if ( OidSourceHandle && *OidSourceHandle == 18 )
        v4 = OidSourceHandle;
      if ( (*(_DWORD *)(v13 + 4) & 2) != 0 )
      {
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v13 + 8));
        v15 = SwitchBySwitchId;
        if ( !SwitchBySwitchId )
        {
LABEL_21:
          *((_DWORD *)v7 + 10) = -1073741811;
LABEL_22:
          v8 = 1;
          goto LABEL_72;
        }
      }
      else
      {
        v15 = 0LL;
      }
      if ( (*(_DWORD *)(v13 + 4) & 1) != 0 )
      {
        if ( *(_WORD *)(v13 + 12) == 0xFFFF )
        {
          v6 = *(_QWORD *)(v1 + 4744);
          v31 = v6;
          v16 = v6 == 0;
        }
        else
        {
          VFByVFId = ndisIovFindVFByVFId(v1);
          v32 = VFByVFId;
          v16 = VFByVFId == 0;
        }
        if ( v16 )
          goto LABEL_21;
      }
      NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      v17 = NewIrql;
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2888497;
      if ( !v4 )
      {
        if ( v6 )
        {
          v3 = *(_DWORD *)(v6 + 28);
          v18 = (_QWORD **)(v6 + 32);
        }
        else if ( VFByVFId )
        {
          v3 = *(_DWORD *)(VFByVFId + 76);
          v18 = (_QWORD **)(VFByVFId + 80);
        }
        else if ( v15 )
        {
          v3 = *((_DWORD *)v15 + 12);
          v18 = (_QWORD **)(v15 + 7);
        }
        else
        {
          v3 = *(_DWORD *)(v1 + 4800);
          v18 = (_QWORD **)(v1 + 4808);
        }
LABEL_52:
        v21 = 576 * v3 + 28;
        v36 = v21;
        *(_DWORD *)(v7[4] + 68) = v21;
        v22 = v7[4];
        if ( v21 <= *(_DWORD *)(v22 + 52) )
        {
          v23 = *(_DWORD **)(v22 + 40);
          v24 = 0;
          *v23 = 1835392;
          v23[4] = 28;
          v23[5] = v3;
          v23[6] = 576;
          v25 = v23 + 7;
          v26 = *v18;
          if ( *v18 != v18 )
          {
            v27 = v25;
            do
            {
              if ( v24 >= v3 )
                break;
              if ( v32 || v31 )
              {
                v28 = (__int64)(v26 - 6);
              }
              else if ( SwitchBySwitchId )
              {
                v28 = (__int64)(v26 - 4);
              }
              else if ( v4 )
              {
                v28 = (__int64)(v26 - 2);
              }
              else
              {
                v28 = (__int64)v26;
              }
              v26 = (_QWORD *)*v26;
              if ( !v4 || v4 == *(_BYTE **)(v28 + 80) )
              {
                ndisIovCopyVPortInfo(v27, v28);
                v27 += 144;
                ++v24;
              }
            }
            while ( v26 != v18 );
            v7 = a1;
            v1 = v33;
            v21 = v36;
            v17 = NewIrql;
          }
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v17);
          v29 = v7[4];
          *((_DWORD *)v7 + 10) = 0;
          *(_DWORD *)(v29 + 60) = v21;
        }
        else
        {
          *((_DWORD *)v7 + 10) = -1073676266;
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
        }
        goto LABEL_22;
      }
      if ( v6 )
      {
        v18 = (_QWORD **)(v6 + 32);
      }
      else if ( VFByVFId )
      {
        v18 = (_QWORD **)(VFByVFId + 80);
      }
      else
      {
        if ( !v15 )
        {
          v3 = *((_DWORD *)v4 + 230);
          v18 = (_QWORD **)(v4 + 928);
          goto LABEL_52;
        }
        v18 = (_QWORD **)(v15 + 7);
      }
      v19 = *v18;
      if ( *v18 != v18 )
      {
        do
        {
          if ( VFByVFId || (v20 = v19 - 4, v6) )
            v20 = v19 - 6;
          if ( (_BYTE *)v20[10] == v4 )
            ++v3;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 != v18 );
        v7 = a1;
      }
      goto LABEL_52;
    }
  }
  *((_DWORD *)v7 + 10) = -1073741637;
LABEL_72:
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x36u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v1, *((_DWORD *)v7 + 10));
  return v8;
}
