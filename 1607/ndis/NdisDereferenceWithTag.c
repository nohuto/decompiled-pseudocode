/*
 * XREFs of NdisDereferenceWithTag @ 0x1C000CE60
 * Callers:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C0014E64 (IFBLOCK_DECREMENT_REF.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017670 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0017D60 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ndisDereferenceMiniportRef @ 0x1C005BC24 (ndisDereferenceMiniportRef.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  int v3; // ecx
  __int64 v4; // rax
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // r9
  ULONG_PTR v7; // r9
  ULONG_PTR v8; // rbx
  unsigned int v9; // edx

  if ( BugCheckParameter3 )
  {
    if ( a2 == 0xFF )
    {
      *(_BYTE *)BugCheckParameter3 &= ~2u;
    }
    else
    {
      v3 = *(unsigned __int8 *)(BugCheckParameter3 + 1);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v7 = a2;
          v8 = BugCheckParameter3 + ((unsigned __int64)a2 << 6);
          v9 = *(_DWORD *)(v8 + 64);
          if ( v9 >> 17 < 0x3FFE && (unsigned __int16)v9 >> 1 == (v9 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v8 + 8));
            *(_DWORD *)(v8 + 64) &= 0x10001u;
          }
          else
          {
            if ( (v9 & 0xFFFE) == 0 && (v9 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, v7);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v8 + 8), 0);
          }
        }
      }
      else
      {
        v4 = *(_QWORD *)(BugCheckParameter3 + 8);
        if ( v4 && (v5 = *(_BYTE *)(BugCheckParameter3 + 3), v6 = 0, v5) )
        {
          while ( *(_BYTE *)(v4 + 2LL * v6) != a2 || !*(_BYTE *)(v4 + 2LL * v6 + 1) )
          {
            if ( ++v6 >= v5 )
              goto LABEL_8;
          }
          --*(_BYTE *)(v4 + 2LL * v6 + 1);
        }
        else
        {
LABEL_8:
          if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), a2) )
            ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, a2);
        }
      }
    }
  }
}
