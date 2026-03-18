/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0285858
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B1E8C (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258250 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258288 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025829C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0285670 (-bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02856C4 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // r14
  __int64 v15; // rbx
  struct OBJECT *Object; // rsi
  __int64 (__fastcall *v17)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // rax
  _BYTE v19[48]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v20[32]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v21[80]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+128h] [rbp+10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v22 = v15;
  if ( !v15 )
    return v9;
  Object = (struct OBJECT *)AllocateObject(32LL, 14LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
    v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v19, Object, 1, 0, 14);
    if ( v9 )
    {
      *((_QWORD *)this + 4) = Object;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v22);
      v17 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v15 + 3224);
      if ( v17 )
        v10 = v17(*(_QWORD *)(v15 + 1824), a3, a4, a5, a6, a7, a8, a9, 0);
      else
        EngSetLastError(0x57u);
      if ( v10 )
      {
        *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v10;
        XDCOBJ::bAddColorTransform(a2, v9);
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
      DCOBJ::~DCOBJ((DCOBJ *)v21);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( !Object )
    goto LABEL_16;
  if ( v9 )
  {
    if ( !v10 )
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
      COLORTRANSFORMOBJ::bDelete(this, a2, 0);
      v9 = 0LL;
      Object = 0LL;
    }
LABEL_16:
    if ( v9 )
      return v9;
  }
  if ( Object )
    FreeObject(Object, 14LL);
  return v9;
}
