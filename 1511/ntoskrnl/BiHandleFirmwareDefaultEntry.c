/*
 * XREFs of BiHandleFirmwareDefaultEntry @ 0x140690BD4
 * Callers:
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BiGetElement @ 0x14068DFAC (BiGetElement.c)
 *     BiTranslateObjectIdentifier @ 0x1406911FC (BiTranslateObjectIdentifier.c)
 */

__int64 __fastcall BiHandleFirmwareDefaultEntry(__int64 a1, void *a2, PVOID *a3, unsigned int *a4)
{
  int Element; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  char *v12; // r15
  int v13; // ebp
  _DWORD *v14; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rsi
  int v18; // [rsp+20h] [rbp-28h] BYREF
  PVOID P[4]; // [rsp+28h] [rbp-20h] BYREF

  P[0] = 0LL;
  Element = BiGetElement(a2, 0x23000003u, P, &v18);
  v9 = Element;
  if ( Element == -1073741275 )
    goto LABEL_22;
  if ( Element < 0 )
    goto LABEL_23;
  BcdDeleteElement(a2, 0x23000003u);
  if ( (int)BiTranslateObjectIdentifier(a1, P[0], &v18) < 0 )
    goto LABEL_22;
  v10 = *a4;
  v11 = 0LL;
  v12 = (char *)*a3;
  v13 = v18;
  if ( *a4 )
  {
    v14 = *a3;
    do
    {
      if ( *v14 == v18 )
        break;
      v11 = (unsigned int)(v11 + 1);
      ++v14;
    }
    while ( (unsigned int)v11 < v10 );
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 != v10 )
        goto LABEL_13;
    }
    else if ( v10 )
    {
      goto LABEL_22;
    }
  }
  ++v10;
LABEL_13:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v10, 0x4B444342u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_23;
  }
  *PoolWithTag = v13;
  if ( (_DWORD)v11 )
    memmove(PoolWithTag + 1, v12, 4LL * (unsigned int)v11);
  if ( (unsigned int)v11 < v10 - 1 )
    memmove(&v16[(unsigned int)v11 + 1], &v12[4 * v11 + 4], 4LL * (v10 - (unsigned int)v11 - 1));
  if ( *a3 )
    ExFreePoolWithTag(*a3, 0);
  *a3 = v16;
  *a4 = v10;
LABEL_22:
  v9 = 0;
LABEL_23:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return v9;
}
