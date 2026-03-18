/*
 * XREFs of EtwpAddUmRegEntry @ 0x140438150
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwpAddUmRegEntry(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int16 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  int inserted; // ecx
  _KPROCESS *Process; // rbx
  _BYTE *v12; // rdi
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-88h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+58h] [rbp-50h] BYREF
  int v18; // [rsp+60h] [rbp-48h] BYREF
  __int64 v19; // [rsp+68h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp-38h]
  int v21; // [rsp+78h] [rbp-30h]
  __int128 v22; // [rsp+80h] [rbp-28h]

  v18 = 48;
  v19 = 0LL;
  v21 = 64;
  v20 = 0LL;
  v22 = 0LL;
  inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (__int64)&v18, 1, v15, 112, 0, 0, &Object, 0LL);
  if ( inserted >= 0 )
  {
    memset(Object, 0, 0x70uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    v12 = Object;
    *((_QWORD *)Object + 10) = Process;
    v12[98] |= 2u;
    if ( a2 == 2 )
      v12[98] |= 8u;
    *((_WORD *)v12 + 48) = a3;
    *((_QWORD *)v12 + 11) = a4;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    *((_QWORD *)v12 + 4) = BugCheckParameter2;
    v13 = *(_QWORD *)(BugCheckParameter2 + 40);
    *(_QWORD *)v12 = v13;
    *((_QWORD *)v12 + 1) = BugCheckParameter2 + 40;
    if ( *(_QWORD *)(v13 + 8) != BugCheckParameter2 + 40 )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = v12;
    *(_QWORD *)(BugCheckParameter2 + 40) = v12;
    *((_QWORD *)v12 + 3) = v12 + 16;
    *((_QWORD *)v12 + 2) = v12 + 16;
    v12[98] |= 0x80u;
    inserted = ObInsertObjectEx(v12, 0LL, 2052LL, 1, 0, (PVOID *)&v17, a6);
    if ( inserted >= 0 )
      *a5 = v12;
  }
  return (unsigned int)inserted;
}
