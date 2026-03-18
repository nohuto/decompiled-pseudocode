/*
 * XREFs of ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C007BC6C
 * Callers:
 *     NtGdiCreateColorSpace @ 0x1C00BCE60 (NtGdiCreateColorSpace.c)
 *     bInitICM @ 0x1C0137F6C (bInitICM.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000F670 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF1C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF74 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00AF044 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
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
        RtlStringCchCopyW((char *)(Object + 92), 260LL, (char *)a1 + 68);
        *(_DWORD *)(Object + 612) = *((_DWORD *)a1 + 147);
        HmgDecrementShareReferenceCount((_DWORD *)Object);
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
