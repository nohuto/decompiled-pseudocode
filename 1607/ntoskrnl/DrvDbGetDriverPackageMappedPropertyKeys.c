/*
 * XREFs of DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E1714
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404E5974 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x1404CD43C (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x1406E118C (DrvDbGetCompositeMappedPropertyKeys.c)
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
  __int64 v7; // r15
  unsigned int v8; // r12d
  __int64 v11; // rsi
  int CompositeMappedPropertyKeys; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 *v16; // rbx
  HANDLE v17; // r8
  int DriverPackageMappedProperty; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r13d
  const WCHAR **v23; // r14
  HANDLE v24; // rdx
  int Value; // eax
  __int64 v26; // rax
  int v27; // r8d
  const WCHAR *v28; // rdx
  __int64 v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-40h]
  unsigned int *pszDesta; // [rsp+28h] [rbp-38h]
  NTSTRSAFE_PWSTR pszDest; // [rsp+28h] [rbp-38h]
  int v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = a6;
  v7 = 0LL;
  v8 = a5;
  Handle[0] = 0LL;
  pszDesta = a6;
  *a6 = 0;
  v11 = a4;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(
                                  (__int64)a1,
                                  (_OWORD **)&off_1402F4D60,
                                  9u,
                                  a4,
                                  a5,
                                  pszDesta);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v14 = (unsigned int)*v6;
    if ( (_DWORD)v14 )
    {
      if ( v13 )
        v11 = v13 + 20 * v14;
      v8 = a5 - v14;
    }
    if ( a3
      || (LOBYTE(pszDest) = 0,
          LODWORD(v31) = 1,
          CompositeMappedPropertyKeys = DrvDbOpenObjectRegKey(a1, 0LL, 2, a2, v31, pszDest, Handle, 0LL),
          CompositeMappedPropertyKeys >= 0) )
    {
      v15 = 0;
      v16 = (__int64 *)off_14025D810;
      while ( 1 )
      {
        v17 = Handle[0];
        if ( a3 )
          v17 = a3;
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        a1,
                                        a2,
                                        v17,
                                        *v16,
                                        (_DWORD *)&v35 + 1,
                                        0LL,
                                        0,
                                        (unsigned int *)&v35);
        if ( DriverPackageMappedProperty != -1073741275 )
        {
          if ( DriverPackageMappedProperty && DriverPackageMappedProperty != -1073741789 )
            goto LABEL_22;
          if ( v11 && (unsigned int)v7 < v8 )
          {
            v20 = *v16;
            v21 = 5 * v7;
            v7 = (unsigned int)(v7 + 1);
            *(_OWORD *)(v11 + 4 * v21) = *(_OWORD *)*v16;
            *(_DWORD *)(v11 + 4 * v21 + 16) = *(_DWORD *)(v20 + 16);
          }
          v19 = (unsigned int)(*v6 + 1);
          if ( (unsigned int)v19 < *v6 )
          {
            *v6 = -1;
            *v6 = 0;
LABEL_22:
            v22 = 0;
            v23 = (const WCHAR **)&off_140257DD0;
LABEL_23:
            LODWORD(a6) = 0;
            v24 = Handle[0];
            if ( a3 )
              v24 = a3;
            Value = PnpCtxRegQueryValue(v19, v24, v23[2], 0LL, 0LL, (unsigned int *)&a6);
            CompositeMappedPropertyKeys = Value;
            if ( Value == -1073741772 )
            {
              v19 = (__int64)*v23;
              if ( *((_DWORD *)*v23 + 4) != 7 )
                goto LABEL_42;
              v26 = *(_QWORD *)v19 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
              if ( *(_QWORD *)v19 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
                v26 = *(_QWORD *)(v19 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v26 )
                goto LABEL_42;
              v27 = (int)Handle[0];
              if ( a3 )
                v27 = (int)a3;
              if ( (int)DrvDbGetDriverPackageSignerScore((int)a1, a2, v27, (wchar_t *)&v34) < 0 || v34 != 218103811 )
              {
LABEL_42:
                CompositeMappedPropertyKeys = 0;
                ++v22;
                v23 += 5;
                if ( v22 >= 0x1A )
                  break;
                goto LABEL_23;
              }
            }
            else if ( Value && Value != -1073741789 )
            {
              break;
            }
            if ( v11 && (unsigned int)v7 < v8 )
            {
              v28 = *v23;
              v29 = 5 * v7;
              v7 = (unsigned int)(v7 + 1);
              *(_OWORD *)(v11 + 4 * v29) = *(_OWORD *)*v23;
              *(_DWORD *)(v11 + 4 * v29 + 16) = *((_DWORD *)v28 + 4);
            }
            v19 = (unsigned int)(*v6 + 1);
            if ( (unsigned int)v19 < *v6 )
            {
              *v6 = -1;
              CompositeMappedPropertyKeys = -1073741675;
              *v6 = 0;
              break;
            }
            *v6 = v19;
            goto LABEL_42;
          }
          *v6 = v19;
        }
        ++v15;
        ++v16;
        if ( v15 >= 2 )
          goto LABEL_22;
      }
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return (unsigned int)CompositeMappedPropertyKeys;
}
