/*
 * XREFs of BiEnumerateSubKeys @ 0x14053C7E0
 * Callers:
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x1406D21C0 (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140125318 (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x14012E4E0 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x14012E4E8 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // esi
  void *v6; // r15
  NTSTATUS v7; // ebx
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // eax
  char *PoolWithTag; // rax
  char *v13; // r12
  ULONG v14; // r15d
  unsigned int *v15; // rbx
  __int64 v16; // r8
  ULONG j; // r14d
  NTSTATUS v18; // eax
  char *v19; // r12
  unsigned int i; // [rsp+34h] [rbp-B4h]
  void *v22; // [rsp+38h] [rbp-B0h]
  _QWORD *v23; // [rsp+40h] [rbp-A8h]
  ULONG v24; // [rsp+48h] [rbp-A0h]
  ULONG ResultLength; // [rsp+4Ch] [rbp-9Ch] BYREF
  PVOID P; // [rsp+50h] [rbp-98h]
  _QWORD *v27; // [rsp+58h] [rbp-90h]
  ULONG *v28; // [rsp+60h] [rbp-88h]
  _QWORD *v29; // [rsp+68h] [rbp-80h]
  ULONG *v30; // [rsp+70h] [rbp-78h]
  char KeyInformation[20]; // [rsp+78h] [rbp-70h] BYREF
  ULONG v32; // [rsp+8Ch] [rbp-5Ch]
  unsigned int v33; // [rsp+90h] [rbp-58h]

  v28 = a3;
  v3 = a2;
  v27 = a2;
  v29 = a2;
  v30 = a3;
  v5 = 0;
  for ( i = 0; ; i = v5 )
  {
    *v3 = 0LL;
    *a3 = 0;
    P = 0LL;
    v6 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v22 = a1;
    v7 = BiZwQueryKey(a1, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -2147483643 )
    {
      v8 = v32;
      v24 = v32;
      if ( v32 )
      {
        v9 = v33 + 2;
        if ( (unsigned int)v9 < v33 )
        {
          v9 = 0xFFFFFFFFLL;
          v7 = -1073741675;
        }
        else
        {
          v7 = 0;
        }
        if ( v7 >= 0 )
        {
          v9 *= v32;
          if ( v9 > 0xFFFFFFFF )
          {
            LODWORD(v9) = -1;
            v7 = -1073741675;
          }
          else
          {
            v7 = 0;
          }
        }
        if ( v7 >= 0 )
        {
          v10 = 8 * v32;
          if ( 8 * (unsigned __int64)v32 > 0xFFFFFFFF )
          {
            v10 = -1;
            v7 = -1073741675;
          }
          else
          {
            v7 = 0;
          }
          if ( v7 >= 0 )
          {
            if ( v10 + (unsigned int)v9 < v10 )
            {
              v11 = -1;
              v7 = -1073741675;
            }
            else
            {
              v11 = v10 + v9;
              v7 = 0;
            }
            if ( v7 >= 0 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x4B444342u);
              v6 = PoolWithTag;
              v23 = PoolWithTag;
              if ( PoolWithTag )
              {
                v13 = &PoolWithTag[8 * v8];
                v14 = v33 + 26;
                if ( v33 >= 0xFFFFFFE6 )
                {
                  v14 = -1;
                  v7 = -1073741675;
                }
                else
                {
                  v7 = 0;
                }
                if ( v7 < 0 )
                {
                  v6 = PoolWithTag;
                }
                else
                {
                  v15 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v14, 0x4B444342u);
                  P = v15;
                  if ( v15 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v24 )
                        goto LABEL_27;
                      v18 = BiZwEnumerateKey(v22, j, v16, v15, v14, &ResultLength);
                      v7 = v18;
                      if ( v18 == -2147483622 )
                        break;
                      if ( v18 < 0 )
                        goto LABEL_46;
                      v15 = (unsigned int *)P;
                      if ( (unsigned __int64)*((unsigned int *)P + 3) + 2 > (unsigned int)v9 )
                      {
                        v7 = -1073741789;
                        goto LABEL_46;
                      }
                      v23[j] = v13;
                      memmove(v13, v15 + 4, v15[3]);
                      v19 = &v13[v15[3]];
                      *(_WORD *)v19 = 0;
                      v13 = v19 + 2;
                      LODWORD(v9) = -2 - v15[3] + v9;
                    }
                    if ( j )
                    {
LABEL_27:
                      v6 = v23;
                      *v27 = v23;
                      *v28 = j;
                      v7 = 0;
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v7 = -1073741670;
                  }
LABEL_46:
                  v6 = v23;
                }
              }
              else
              {
                v7 = -1073741670;
              }
            }
          }
        }
LABEL_28:
        v5 = i;
      }
      else
      {
        v7 = 0;
      }
      a1 = v22;
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4B444342u);
    if ( v7 < 0 && v6 )
      ExFreePoolWithTag(v6, 0x4B444342u);
    if ( v7 != -1073741443 )
      break;
    __debugbreak();
    v3 = v27;
    a3 = v28;
    if ( v5 >= 5 )
      break;
    ++v5;
  }
  return (unsigned int)v7;
}
