/*
 * XREFs of DrvDbGetDriverPackageMappedPropertyKeys @ 0x14071B1DC
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404DD4E0 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DDA8C (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140589388 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14071AC54 (DrvDbGetCompositeMappedPropertyKeys.c)
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
  __int64 *v18; // r14
  HANDLE v19; // rdx
  int Value; // eax
  HANDLE v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-68h]
  unsigned int *v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  wchar_t v28[4]; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a6;
  v7 = 0LL;
  v8 = a5;
  Handle[0] = 0LL;
  v26 = a6;
  *a6 = 0;
  v11 = a4;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(
                                  (__int64)a1,
                                  (_OWORD **)&off_1403238A0,
                                  9u,
                                  a4,
                                  a5,
                                  v26);
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
      || (LOBYTE(v27) = 0,
          LODWORD(v25) = 1,
          CompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(a1, 0LL, 2u, a2, v25, v27, Handle, 0LL),
          CompositeMappedPropertyKeys >= 0) )
    {
      v17 = 0;
      v18 = (__int64 *)&off_140290F00;
      do
      {
        LODWORD(a6) = 0;
        v19 = Handle[0];
        if ( a3 )
          v19 = a3;
        Value = PnpCtxRegQueryValue(v13, v19, v18[2], 0LL, 0LL, (__int64)&a6);
        CompositeMappedPropertyKeys = Value;
        if ( Value == -1073741772 )
        {
          v13 = *v18;
          if ( *(_DWORD *)(*v18 + 16) != 7
            || *(_QWORD *)v13 != *(_QWORD *)&DEVPKEY_DriverPackage_SignerName
            || *(_QWORD *)(v13 + 8) != 0xBADB47CC74A2E194uLL )
          {
            goto LABEL_27;
          }
          v21 = Handle[0];
          if ( a3 )
            v21 = a3;
          if ( (int)DrvDbGetDriverPackageSignerScore((__int64)a1, a2, v21, v28) < 0 || *(_DWORD *)v28 != 218103811 )
            goto LABEL_27;
        }
        else if ( Value && Value != -1073741789 )
        {
          break;
        }
        if ( v11 && (unsigned int)v7 < v8 )
        {
          v22 = *v18;
          v23 = 5 * v7;
          v7 = (unsigned int)(v7 + 1);
          *(_OWORD *)(v11 + 4 * v23) = *(_OWORD *)*v18;
          *(_DWORD *)(v11 + 4 * v23 + 16) = *(_DWORD *)(v22 + 16);
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
LABEL_27:
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
