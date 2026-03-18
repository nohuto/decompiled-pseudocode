/*
 * XREFs of BiEnumerateSubKeys @ 0x1404FBA20
 * Callers:
 *     BiDeleteKey @ 0x1404F5314 (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x14068D82C (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwEnumerateKey @ 0x14011BB9C (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x14011BBA4 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // esi
  void *v5; // r15
  NTSTATUS v6; // ebx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // eax
  char *PoolWithTag; // rax
  char *v12; // r12
  ULONG v13; // r15d
  unsigned int *v14; // rbx
  __int64 v15; // r8
  ULONG j; // r14d
  NTSTATUS v17; // eax
  char *v18; // r12
  unsigned int i; // [rsp+34h] [rbp-C4h]
  _QWORD *v21; // [rsp+38h] [rbp-C0h]
  void *v22; // [rsp+40h] [rbp-B8h]
  ULONG *v23; // [rsp+48h] [rbp-B0h]
  ULONG v24; // [rsp+50h] [rbp-A8h]
  ULONG ResultLength; // [rsp+60h] [rbp-98h] BYREF
  PVOID P; // [rsp+68h] [rbp-90h]
  void *v28; // [rsp+70h] [rbp-88h]
  ULONG *v29; // [rsp+78h] [rbp-80h]
  _QWORD *v30; // [rsp+80h] [rbp-78h]
  char KeyInformation[20]; // [rsp+88h] [rbp-70h] BYREF
  ULONG v32; // [rsp+9Ch] [rbp-5Ch]
  unsigned int v33; // [rsp+A0h] [rbp-58h]

  v23 = a3;
  v3 = a2;
  v22 = a1;
  v28 = a1;
  v30 = a2;
  v29 = a3;
  v4 = 0;
  for ( i = 0; ; i = v4 )
  {
    *v3 = 0LL;
    *a3 = 0;
    P = 0LL;
    v5 = 0LL;
    v6 = BiZwQueryKey(a1, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( ((v6 + 0x80000000) & 0x80000000) != 0 || v6 == -2147483643 )
    {
      v7 = v32;
      v24 = v32;
      if ( v32 )
      {
        v8 = v33 + 2;
        if ( (unsigned int)v8 < v33 )
        {
          v8 = 0xFFFFFFFFLL;
          v6 = -1073741675;
        }
        else
        {
          v6 = 0;
        }
        if ( v6 >= 0 )
        {
          v8 *= v32;
          if ( v8 > 0xFFFFFFFF )
          {
            LODWORD(v8) = -1;
            v6 = -1073741675;
          }
          else
          {
            v6 = 0;
          }
        }
        if ( v6 >= 0 )
        {
          v9 = 8 * v32;
          if ( 8 * (unsigned __int64)v32 > 0xFFFFFFFF )
          {
            v9 = -1;
            v6 = -1073741675;
          }
          else
          {
            v6 = 0;
          }
          if ( v6 >= 0 )
          {
            if ( v9 + (unsigned int)v8 < v9 )
            {
              v10 = -1;
              v6 = -1073741675;
            }
            else
            {
              v10 = v9 + v8;
              v6 = 0;
            }
            if ( v6 >= 0 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
              v5 = PoolWithTag;
              v21 = PoolWithTag;
              if ( PoolWithTag )
              {
                v12 = &PoolWithTag[8 * v7];
                v13 = v33 + 26;
                if ( v33 >= 0xFFFFFFE6 )
                {
                  v13 = -1;
                  v6 = -1073741675;
                }
                else
                {
                  v6 = 0;
                }
                if ( v6 < 0 )
                {
                  v5 = PoolWithTag;
                }
                else
                {
                  v14 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4B444342u);
                  P = v14;
                  if ( v14 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v24 )
                        goto LABEL_27;
                      v17 = BiZwEnumerateKey(v22, j, v15, v14, v13, &ResultLength);
                      v6 = v17;
                      if ( v17 == -2147483622 )
                        break;
                      if ( v17 < 0 )
                        goto LABEL_45;
                      v14 = (unsigned int *)P;
                      if ( (unsigned __int64)*((unsigned int *)P + 3) + 2 > (unsigned int)v8 )
                      {
                        v6 = -1073741789;
                        goto LABEL_45;
                      }
                      v21[j] = v12;
                      memmove(v12, v14 + 4, v14[3]);
                      v18 = &v12[v14[3]];
                      *(_WORD *)v18 = 0;
                      v12 = v18 + 2;
                      LODWORD(v8) = -2 - v14[3] + v8;
                    }
                    if ( j )
                    {
LABEL_27:
                      v5 = v21;
                      *a2 = v21;
                      *v23 = j;
                      v6 = 0;
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v6 = -1073741670;
                  }
LABEL_45:
                  v5 = v21;
                }
              }
              else
              {
                v6 = -1073741670;
              }
            }
          }
        }
LABEL_28:
        v4 = i;
      }
      else
      {
        v6 = 0;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v6 < 0 && v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 != -1073741443 )
      break;
    __debugbreak();
    v3 = a2;
    a3 = v23;
    a1 = v22;
    if ( v4 >= 5 )
      break;
    ++v4;
  }
  return (unsigned int)v6;
}
