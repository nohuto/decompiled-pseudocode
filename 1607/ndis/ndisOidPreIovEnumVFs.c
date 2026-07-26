/*
 * XREFs of ndisOidPreIovEnumVFs @ 0x1C0069A10
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00134F4 (ndisIovFindSwitchBySwitchId.c)
 *     ndisGetOidSourceHandle @ 0x1C0022244 (ndisGetOidSourceHandle.c)
 *     ndisIovCopyVFInfo @ 0x1C00278A4 (ndisIovCopyVFInfo.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreIovEnumVFs(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // r13d
  _BYTE *v4; // rbp
  __int64 *SwitchBySwitchId; // r15
  int *v6; // rbx
  char v7; // si
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _BYTE *OidSourceHandle; // rax
  __int64 v11; // r8
  KIRQL v12; // dl
  _QWORD **v13; // rcx
  _QWORD *i; // rax
  unsigned int v15; // r12d
  __int64 v16; // rax
  _DWORD *v17; // rax
  _QWORD *v18; // r14
  unsigned int v19; // eax
  _DWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  _DWORD *v24; // [rsp+20h] [rbp-58h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]
  int v27; // [rsp+90h] [rbp+18h]
  _QWORD **v28; // [rsp+98h] [rbp+20h]

  v1 = *a1;
  v2 = a1[4];
  v3 = 0;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  v6 = (int *)a1;
  v7 = 1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qq(0x29u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1, v1);
  *(_DWORD *)(v2 + 60) = 0;
  v8 = (_DWORD *)*((_QWORD *)v6 + 4);
  if ( v8[1] != 12 )
    goto LABEL_47;
  v6[10] = 0;
  if ( v8[12] >= 0x18u )
  {
    if ( v8[13] < 0x18u )
    {
      v8[17] = 24;
      v6[10] = -1073676266;
    }
  }
  else
  {
    v8[17] = 24;
    v6[10] = -1073676268;
  }
  if ( v6[10] )
  {
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 0;
    goto LABEL_48;
  }
  if ( !v1 )
  {
    v7 = 0;
    goto LABEL_48;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v6 + 4672LL);
  if ( v9 && *(_QWORD *)(*(_QWORD *)v6 + 3616LL) && (*(_BYTE *)(v9 + 8) & 3) == 3 )
  {
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 24;
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
    if ( OidSourceHandle && *OidSourceHandle == 18 )
      v4 = OidSourceHandle;
    if ( (*(_DWORD *)(v11 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v11 + 8))) != 0LL )
    {
      NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
      v12 = NewIrql;
      *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v1 + 1856) = 2887021;
      if ( v4 )
      {
        if ( SwitchBySwitchId )
        {
          for ( i = (_QWORD *)*((_QWORD *)v4 + 113); i != (_QWORD *)(v4 + 904); i = (_QWORD *)*i )
          {
            if ( (__int64 *)i[6] == SwitchBySwitchId )
              ++v3;
          }
        }
        else
        {
          v3 = *((_DWORD *)v4 + 224);
        }
        v13 = (_QWORD **)(v4 + 904);
      }
      else
      {
        if ( SwitchBySwitchId )
          v3 = *((_DWORD *)SwitchBySwitchId + 18);
        else
          v3 = *(_DWORD *)(v1 + 4776);
        v13 = (_QWORD **)(v1 + 4784);
      }
      v28 = v13;
      v15 = 1632 * v3 + 24;
      *(_DWORD *)(*((_QWORD *)v6 + 4) + 68LL) = v15;
      v16 = *((_QWORD *)v6 + 4);
      if ( v15 <= *(_DWORD *)(v16 + 52) )
      {
        v17 = *(_DWORD **)(v16 + 40);
        *v17 = 1573248;
        v17[3] = 24;
        v17[4] = v3;
        v17[5] = 1632;
        v18 = *v13;
        v24 = v17 + 6;
        v19 = 0;
        v27 = 0;
        if ( *v13 != v13 )
        {
          v20 = v24;
          do
          {
            if ( v19 >= v3 )
              break;
            v21 = (__int64)(v18 - 2);
            if ( !v4 )
              v21 = (__int64)v18;
            v18 = (_QWORD *)*v18;
            if ( !SwitchBySwitchId || *(__int64 **)(v21 + 64) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v20, v21);
              v20 += 408;
              v13 = v28;
              v19 = ++v27;
            }
          }
          while ( v18 != v13 );
          v6 = (int *)a1;
          v12 = NewIrql;
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
        v22 = *((_QWORD *)v6 + 4);
        v6[10] = 0;
        *(_DWORD *)(v22 + 60) = v15;
      }
      else
      {
        v6[10] = -1073676266;
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), NewIrql);
      }
    }
    else
    {
      v6[10] = -1073741811;
    }
  }
  else
  {
LABEL_47:
    v6[10] = -1073741637;
  }
LABEL_48:
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v1, v6[10]);
  return v7;
}
