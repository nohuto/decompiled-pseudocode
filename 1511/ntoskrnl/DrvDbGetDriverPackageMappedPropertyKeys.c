/*
 * XREFs of DrvDbGetDriverPackageMappedPropertyKeys @ 0x14069B21C
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404437A8 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1404442A0 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1404C7070 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14069AC94 (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedPropertyKeys(
        __int64 **a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v11; // rsi
  __int64 v13; // rcx
  int CompositeMappedPropertyKeys; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // ebp
  const WCHAR **v18; // r14
  HANDLE v19; // rdx
  int Value; // eax
  __int64 v21; // rax
  HANDLE v22; // r8
  const WCHAR *v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-68h]
  unsigned int *v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  wchar_t v29[4]; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a6;
  v7 = 0LL;
  v8 = a5;
  Handle[0] = 0LL;
  v27 = a6;
  *a6 = 0;
  v11 = a4;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(
                                  (__int64)a1,
                                  (_OWORD **)&off_1402D4770,
                                  9u,
                                  a4,
                                  a5,
                                  v27);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v16 = (unsigned int)*v6;
    if ( (_DWORD)v16 )
    {
      if ( v15 )
      {
        v13 = 5 * v16;
        v11 = v15 + 20 * v16;
      }
      v8 = a5 - v16;
    }
    if ( a3
      || (LOBYTE(v28) = 0,
          LODWORD(v26) = 1,
          CompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(a1, 0LL, 2u, a2, v26, v28, Handle, 0LL),
          CompositeMappedPropertyKeys >= 0) )
    {
      v17 = 0;
      v18 = (const WCHAR **)&off_14023C3D0;
      do
      {
        LODWORD(a6) = 0;
        v19 = Handle[0];
        if ( a3 )
          v19 = a3;
        Value = PnpCtxRegQueryValue(v13, v19, v18[2], 0LL, 0LL, (unsigned int *)&a6);
        CompositeMappedPropertyKeys = Value;
        if ( Value == -1073741772 )
        {
          v13 = (__int64)*v18;
          if ( *((_DWORD *)*v18 + 4) != 7 )
            goto LABEL_28;
          v21 = *(_QWORD *)v13 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
          if ( *(_QWORD *)v13 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
            v21 = *(_QWORD *)(v13 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v21 )
            goto LABEL_28;
          v22 = Handle[0];
          if ( a3 )
            v22 = a3;
          if ( (int)DrvDbGetDriverPackageSignerScore((__int64)a1, a2, v22, v29) < 0 || *(_DWORD *)v29 != 218103811 )
            goto LABEL_28;
        }
        else if ( Value && Value != -1073741789 )
        {
          break;
        }
        if ( v11 && (unsigned int)v7 < v8 )
        {
          v23 = *v18;
          v24 = 5 * v7;
          v7 = (unsigned int)(v7 + 1);
          *(_OWORD *)(v11 + 4 * v24) = *(_OWORD *)*v18;
          *(_DWORD *)(v11 + 4 * v24 + 16) = *((_DWORD *)v23 + 4);
        }
        v13 = (unsigned int)(*v6 + 1);
        if ( (unsigned int)v13 < *v6 )
        {
          *v6 = -1;
          CompositeMappedPropertyKeys = -1073741675;
          *v6 = 0;
          break;
        }
        *v6 = v13;
LABEL_28:
        CompositeMappedPropertyKeys = 0;
        ++v17;
        v18 += 5;
      }
      while ( v17 < 0x1A );
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return (unsigned int)CompositeMappedPropertyKeys;
}
