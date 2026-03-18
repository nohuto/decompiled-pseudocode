/*
 * XREFs of ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0297100
 * Callers:
 *     ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0297100 (-MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0297100 (-MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?ulSimulateSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0299E50 (-ulSimulateSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 */

unsigned __int64 __fastcall MulSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, _QWORD *a3, struct _RECTL *a4)
{
  DHPDEV dhpdev; // rax
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 *v7; // rdi
  PVOID v8; // rax
  unsigned __int64 (*v9)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *); // rax
  __int64 v10; // rcx
  __int64 v12; // rbx
  unsigned __int64 (*v13)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *); // rax
  __int64 v14; // rax
  bool v15; // zf
  unsigned int v16; // [rsp+30h] [rbp-48h]
  unsigned int v17; // [rsp+34h] [rbp-44h]
  unsigned __int64 (*v18)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *); // [rsp+38h] [rbp-40h]
  int v19; // [rsp+38h] [rbp-40h]
  struct _RECTL *v20; // [rsp+40h] [rbp-38h]
  _QWORD *v21; // [rsp+48h] [rbp-30h]
  struct _SURFOBJ *v23; // [rsp+50h] [rbp-28h]
  struct _RECTL v24; // [rsp+58h] [rbp-20h] BYREF

  dhpdev = a1->dhpdev;
  v5 = 0LL;
  v18 = 0LL;
  v20 = a4;
  v21 = a3;
  v6 = *((_DWORD *)dhpdev + 4);
  v7 = *(__int64 **)dhpdev;
  v16 = v6;
  v17 = a2;
  if ( a2 )
  {
    v5 = 1LL;
    do
    {
      v23 = (struct _SURFOBJ *)a3[2 * *((unsigned int *)v7 + 4) + 1];
      v19 = a3[2 * *((unsigned int *)v7 + 4)];
      if ( v23 )
      {
        v12 = v7[6];
        if ( bIntersect(a4, (const struct _RECTL *)((char *)v7 + 28), &v24) )
        {
          v24.left -= *((_DWORD *)v7 + 7);
          v24.right -= *((_DWORD *)v7 + 7);
          v24.top -= *((_DWORD *)v7 + 8);
          v24.bottom -= *((_DWORD *)v7 + 8);
        }
        else
        {
          v24 = grclEmpty;
        }
        if ( v19 != 2
          || (v13 = *(unsigned __int64 (**)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *))(v12 + 3040)) == 0LL )
        {
          v13 = ulSimulateSaveScreenBits;
        }
        v14 = ((__int64 (__fastcall *)(__int64, _QWORD, struct _SURFOBJ *, struct _RECTL *))v13)(v7[8], v17, v23, &v24);
        v6 = v16;
        a3 = v21;
        if ( v14 || v17 != 1 )
        {
          a4 = v20;
        }
        else
        {
          a4 = &grclEmpty;
          v17 = 2;
          v20 = &grclEmpty;
          v5 = 0LL;
        }
      }
      v7 = (__int64 *)*v7;
      v15 = v6-- == 1;
      v16 = v6;
    }
    while ( !v15 );
    EngFreeMem(a3);
  }
  else
  {
    if ( v6 <= 0xFFFFFFF )
    {
      v8 = EngAllocMem(1u, 16 * v6, 0x736D5647u);
      a4 = v20;
      v5 = (unsigned __int64)v8;
    }
    if ( v5 )
    {
      while ( 1 )
      {
        if ( bIntersect(a4, (const struct _RECTL *)((char *)v7 + 28), &v24) )
        {
          v24.left -= *((_DWORD *)v7 + 7);
          v24.right -= *((_DWORD *)v7 + 7);
          v24.top -= *((_DWORD *)v7 + 8);
          v24.bottom -= *((_DWORD *)v7 + 8);
          v9 = ulSimulateSaveScreenBits;
          if ( *(_QWORD *)(v7[6] + 3040) )
            v9 = *(unsigned __int64 (**)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *))(v7[6] + 3040);
          v18 = v9;
          v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, struct _RECTL *))v9)(v7[8], 0LL, 0LL, &v24);
          if ( !v10 )
          {
            if ( v18 == ulSimulateSaveScreenBits
              || (v18 = ulSimulateSaveScreenBits,
                  (v10 = ulSimulateSaveScreenBits((struct _SURFOBJ *)v7[8], 0, 0LL, &v24)) == 0) )
            {
              MulSaveScreenBits(a1, 2u, v5, &grclEmpty);
              return 0LL;
            }
          }
        }
        else
        {
          v10 = 0LL;
        }
        *(_QWORD *)(v5 + 16LL * *((unsigned int *)v7 + 4) + 8) = v10;
        if ( v10 )
          *(_DWORD *)(v5 + 16LL * *((unsigned int *)v7 + 4)) = (v18 != ulSimulateSaveScreenBits) + 1;
        v7 = (__int64 *)*v7;
        if ( !--v6 )
          return v5;
        a4 = v20;
      }
    }
  }
  return v5;
}
