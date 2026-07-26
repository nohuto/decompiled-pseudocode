/*
 * XREFs of ndisOidPreIovEnumVPorts @ 0x1C00665B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C000F894 (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisIovCopyVPortInfo @ 0x1C0023FBC (ndisIovCopyVPortInfo.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisIovFindVFByVFId @ 0x1C00D9AD8 (ndisIovFindVFByVFId.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  unsigned int v3; // r15d
  _BYTE *v4; // r13
  __int64 VFByVFId; // r14
  __int64 v6; // r12
  __int64 *v7; // rbx
  char v8; // si
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  _BYTE *OidSourceHandle; // rax
  __int64 *v13; // rbp
  bool v14; // zf
  KIRQL v15; // dl
  _QWORD **v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  unsigned int v19; // ebp
  __int64 v20; // rax
  _DWORD *v21; // rax
  _QWORD *v22; // r14
  unsigned int v23; // eax
  _DWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *SwitchBySwitchId; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  _DWORD *v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v31 = *a1;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  VFByVFId = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v7 = a1;
  v8 = 1;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qq(0x32u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1, v1);
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
      goto LABEL_71;
    }
    if ( !v1 )
    {
      v8 = 0;
      goto LABEL_71;
    }
    v10 = *(_QWORD *)(v1 + 4672);
    if ( v10 )
    {
      if ( *(_QWORD *)(v1 + 3616) && (*(_BYTE *)(v10 + 8) & 3) == 3 )
      {
        v11 = *(_QWORD *)(v2 + 40);
        *(_DWORD *)(v7[4] + 60) = 0;
        *(_DWORD *)(v7[4] + 64) = 28;
        OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
        if ( OidSourceHandle && *OidSourceHandle == 18 )
          v4 = OidSourceHandle;
        if ( (*(_DWORD *)(v11 + 4) & 2) != 0 )
        {
          SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v11 + 8));
          v13 = SwitchBySwitchId;
          if ( !SwitchBySwitchId )
          {
LABEL_20:
            *((_DWORD *)v7 + 10) = -1073741811;
LABEL_21:
            v8 = 1;
            goto LABEL_71;
          }
        }
        else
        {
          v13 = 0LL;
        }
        if ( (*(_DWORD *)(v11 + 4) & 1) != 0 )
        {
          if ( *(_WORD *)(v11 + 12) == 0xFFFF )
          {
            v6 = *(_QWORD *)(v1 + 4744);
            v14 = v6 == 0;
          }
          else
          {
            VFByVFId = ndisIovFindVFByVFId(v1);
            v29 = VFByVFId;
            v14 = VFByVFId == 0;
          }
          if ( v14 )
            goto LABEL_20;
        }
        NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        v15 = NewIrql;
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v1 + 1856) = 2887696;
        if ( !v4 )
        {
          if ( v6 )
          {
            v3 = *(_DWORD *)(v6 + 28);
            v16 = (_QWORD **)(v6 + 32);
          }
          else if ( VFByVFId )
          {
            v3 = *(_DWORD *)(VFByVFId + 76);
            v16 = (_QWORD **)(VFByVFId + 80);
          }
          else if ( v13 )
          {
            v3 = *((_DWORD *)v13 + 12);
            v16 = (_QWORD **)(v13 + 7);
          }
          else
          {
            v3 = *(_DWORD *)(v1 + 4800);
            v16 = (_QWORD **)(v1 + 4808);
          }
LABEL_51:
          v19 = 576 * v3 + 28;
          *(_DWORD *)(v7[4] + 68) = v19;
          v20 = v7[4];
          if ( v19 <= *(_DWORD *)(v20 + 52) )
          {
            v21 = *(_DWORD **)(v20 + 40);
            *v21 = 1835392;
            v21[4] = 28;
            v21[5] = v3;
            v21[6] = 576;
            v22 = *v16;
            v30 = v21 + 7;
            v23 = 0;
            v34 = 0;
            if ( *v16 != v16 )
            {
              v24 = v30;
              do
              {
                if ( v23 >= v3 )
                  break;
                if ( v29 || v6 )
                {
                  v25 = (__int64)(v22 - 6);
                }
                else if ( SwitchBySwitchId )
                {
                  v25 = (__int64)(v22 - 4);
                }
                else if ( v4 )
                {
                  v25 = (__int64)(v22 - 2);
                }
                else
                {
                  v25 = (__int64)v22;
                }
                v22 = (_QWORD *)*v22;
                if ( !v4 || v4 == *(_BYTE **)(v25 + 80) )
                {
                  ndisIovCopyVPortInfo(v24, v25);
                  v24 += 144;
                  v23 = ++v34;
                }
              }
              while ( v22 != v16 );
              v7 = a1;
              v1 = v31;
              v15 = NewIrql;
            }
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v15);
            v26 = v7[4];
            *((_DWORD *)v7 + 10) = 0;
            *(_DWORD *)(v26 + 60) = v19;
          }
          else
          {
            *((_DWORD *)v7 + 10) = -1073676266;
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
          }
          goto LABEL_21;
        }
        if ( v6 )
        {
          v16 = (_QWORD **)(v6 + 32);
        }
        else if ( VFByVFId )
        {
          v16 = (_QWORD **)(VFByVFId + 80);
        }
        else
        {
          if ( !v13 )
          {
            v3 = *((_DWORD *)v4 + 230);
            v16 = (_QWORD **)(v4 + 928);
            goto LABEL_51;
          }
          v16 = (_QWORD **)(v13 + 7);
        }
        v17 = *v16;
        if ( *v16 != v16 )
        {
          do
          {
            if ( VFByVFId || (v18 = v17 - 4, v6) )
              v18 = v17 - 6;
            if ( (_BYTE *)v18[10] == v4 )
              ++v3;
            v17 = (_QWORD *)*v17;
          }
          while ( v17 != v16 );
          v7 = a1;
        }
        goto LABEL_51;
      }
    }
  }
  *((_DWORD *)v7 + 10) = -1073741637;
LABEL_71:
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qD(0x33u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v1, *((_DWORD *)v7 + 10));
  return v8;
}
