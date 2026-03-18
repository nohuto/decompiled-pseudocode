/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005CFA8
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1C00CA210 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1C0156614 (bInitICM.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0055E90 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCFD8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00BD0A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

struct HOBJ__ *__fastcall GreCreateColorSpace(struct _LOGCOLORSPACEEXW *a1)
{
  struct HOBJ__ *v1; // rsi
  __int64 Object; // rdi
  _BYTE v5[56]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0LL;
  if ( *(_DWORD *)a1 == 1347637059 && *((_DWORD *)a1 + 1) == 1024 && *((_DWORD *)a1 + 2) == 588 )
  {
    Object = AllocateObject(0x268uLL, 9u, 0);
    if ( Object )
    {
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v5);
      v1 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v5, (struct OBJECT *)Object, 1, 0, 9u);
      if ( v1 )
      {
        *(_DWORD *)(Object + 24) = *(_DWORD *)a1;
        *(_DWORD *)(Object + 28) = *((_DWORD *)a1 + 1);
        *(_DWORD *)(Object + 32) = *((_DWORD *)a1 + 2);
        *(_DWORD *)(Object + 36) = *((_DWORD *)a1 + 3);
        *(_DWORD *)(Object + 40) = *((_DWORD *)a1 + 4);
        *(_OWORD *)(Object + 44) = *(_OWORD *)((char *)a1 + 20);
        *(_OWORD *)(Object + 60) = *(_OWORD *)((char *)a1 + 36);
        *(_DWORD *)(Object + 76) = *((_DWORD *)a1 + 13);
        *(_DWORD *)(Object + 80) = *((_DWORD *)a1 + 14);
        *(_DWORD *)(Object + 84) = *((_DWORD *)a1 + 15);
        *(_DWORD *)(Object + 88) = *((_DWORD *)a1 + 16);
        RtlStringCchCopyW((unsigned __int16 *)(Object + 92), 0x104uLL, (size_t *)((char *)a1 + 68));
        *(_DWORD *)(Object + 612) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCount((unsigned int *)Object);
      }
      else
      {
        FreeObject(Object);
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v5);
    }
    return v1;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
