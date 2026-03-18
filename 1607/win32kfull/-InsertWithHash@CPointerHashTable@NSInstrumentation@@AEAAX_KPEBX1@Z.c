/*
 * XREFs of ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z @ 0x1C02D82C4
 * Callers:
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C02D8260 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C02D8544 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPointerHashTable::InsertWithHash(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        const void *a4)
{
  unsigned __int64 v4; // r10
  bool v5; // zf
  __int64 v6; // rdx
  unsigned int v7; // [rsp+8h] [rbp+8h] BYREF

  v4 = a2 >> (64 - *((_BYTE *)this + 44));
  v5 = (*((_BYTE *)this + 52) & 1) == 0;
  v7 = v4;
  if ( !v5 )
    *a3 = a2;
  while ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
  {
    LODWORD(v4) = 0;
LABEL_7:
    v7 = v4;
  }
  v6 = *((_QWORD *)this + 4);
  if ( *(_QWORD *)(v6 + 16LL * (unsigned int)v4) )
  {
LABEL_6:
    LODWORD(v4) = v4 + 1;
    goto LABEL_7;
  }
  if ( _InterlockedCompareExchange64(
         (volatile signed __int64 *)(v6 + 16LL * (unsigned int)v4),
         (signed __int64)&v7,
         0LL) )
  {
    LODWORD(v4) = v7;
    goto LABEL_6;
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v7 + 8) = a4;
  *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v7) = a3;
}
