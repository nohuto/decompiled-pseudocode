/*
 * XREFs of BiEnumerateSubKeys @ 0x14056DFB8
 * Callers:
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x14070D344 (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x14070EDBC (BiBuildIdentifierList.c)
 * Callees:
 *     BiZwEnumerateKey @ 0x14014FE28 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x14014FE30 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, char ***a2, ULONG *a3)
{
  char ***v3; // rax
  unsigned int v4; // esi
  char **v5; // r15
  NTSTATUS v6; // ebx
  __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // eax
  char **PoolWithTag; // rax
  char *v12; // r12
  ULONG v13; // r15d
  unsigned int *v14; // rbx
  __int64 v15; // r8
  ULONG v16; // r14d
  char **v17; // r13
  NTSTATUS v18; // eax
  char *v19; // r12
  unsigned int i; // [rsp+34h] [rbp-C4h]
  char **v22; // [rsp+38h] [rbp-C0h]
  void *v23; // [rsp+40h] [rbp-B8h]
  ULONG *v24; // [rsp+48h] [rbp-B0h]
  ULONG ResultLength; // [rsp+50h] [rbp-A8h] BYREF
  char ***v26; // [rsp+58h] [rbp-A0h]
  ULONG v27; // [rsp+60h] [rbp-98h]
  PVOID P; // [rsp+68h] [rbp-90h]
  void *v29; // [rsp+70h] [rbp-88h]
  ULONG *v30; // [rsp+78h] [rbp-80h]
  char ***v31; // [rsp+80h] [rbp-78h]
  char KeyInformation[20]; // [rsp+88h] [rbp-70h] BYREF
  ULONG v33; // [rsp+9Ch] [rbp-5Ch]
  unsigned int v34; // [rsp+A0h] [rbp-58h]

  v24 = a3;
  v3 = a2;
  v26 = a2;
  v23 = a1;
  v29 = a1;
  v31 = a2;
  v30 = a3;
  v4 = 0;
  for ( i = 0; ; i = v4 )
  {
    *v3 = 0LL;
    *a3 = 0;
    P = 0LL;
    v5 = 0LL;
    v6 = BiZwQueryKey(a1, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( ((v6 + 0x80000000) & 0x80000000) != 0 || v6 == -2147483643 )
    {
      v7 = v33;
      v27 = v33;
      if ( !v33 )
      {
        v6 = 0;
        goto LABEL_44;
      }
      v8 = v34 + 2;
      if ( (unsigned int)v8 < v34 )
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
        v8 *= v33;
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
      if ( v6 < 0 )
        goto LABEL_43;
      v9 = 8 * v33;
      if ( 8 * (unsigned __int64)v33 > 0xFFFFFFFF )
      {
        v9 = -1;
        v6 = -1073741675;
      }
      else
      {
        v6 = 0;
      }
      if ( v6 < 0 )
        goto LABEL_43;
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
      if ( v6 < 0 )
        goto LABEL_43;
      PoolWithTag = (char **)ExAllocatePoolWithTag(PagedPool, v10, 0x4B444342u);
      v5 = PoolWithTag;
      v22 = PoolWithTag;
      if ( PoolWithTag )
      {
        v12 = (char *)&PoolWithTag[v7];
        v13 = v34 + 26;
        if ( v34 >= 0xFFFFFFE6 )
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
          goto LABEL_43;
        }
        v14 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4B444342u);
        P = v14;
        if ( v14 )
        {
          v16 = 0;
          if ( !(_DWORD)v7 )
            goto LABEL_41;
          v17 = v22;
          while ( 1 )
          {
            v18 = BiZwEnumerateKey(v23, v16, v15, v14, v13, &ResultLength);
            v6 = v18;
            if ( v18 == -2147483622 )
              break;
            if ( v18 < 0 )
              goto LABEL_30;
            v14 = (unsigned int *)P;
            if ( (unsigned __int64)*((unsigned int *)P + 3) + 2 > (unsigned int)v8 )
            {
              v6 = -1073741789;
              goto LABEL_30;
            }
            *v17 = v12;
            memmove(v12, v14 + 4, v14[3]);
            v19 = &v12[v14[3]];
            *(_WORD *)v19 = 0;
            v12 = v19 + 2;
            LODWORD(v8) = -2 - v14[3] + v8;
            ++v16;
            ++v17;
            if ( v16 >= v27 )
              goto LABEL_41;
          }
          if ( v16 )
          {
LABEL_41:
            v5 = v22;
            *v26 = v22;
            *v24 = v16;
            v6 = 0;
            goto LABEL_43;
          }
        }
        else
        {
          v6 = -1073741670;
        }
LABEL_30:
        v5 = v22;
      }
      else
      {
        v6 = -1073741670;
      }
LABEL_43:
      v4 = i;
    }
LABEL_44:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v6 < 0 && v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 != -1073741443 )
      break;
    __debugbreak();
    v3 = v26;
    a3 = v24;
    a1 = v23;
    if ( v4 >= 5 )
      break;
    ++v4;
  }
  return (unsigned int)v6;
}
