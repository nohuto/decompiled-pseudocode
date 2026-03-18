/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286D04
 * Callers:
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B02A0 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B110 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B148 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0286B1C (-bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0286B70 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall *v20)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // rax
  _BYTE v22[48]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v23[32]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v24[80]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+128h] [rbp+10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v25 = v15;
  if ( !v15 )
    return v9;
  Object = (struct OBJECT *)AllocateObject(32LL, 14LL, 0LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
    v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v22, Object, 1, 0, 14);
    if ( v9 )
    {
      *((_QWORD *)this + 4) = Object;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v25);
      v20 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v15 + 3232);
      if ( v20 )
        v10 = v20(*(_QWORD *)(v15 + 1824), a3, a4, a5, a6, a7, a8, a9, 0);
      else
        EngSetLastError(0x57u);
      if ( v10 )
      {
        *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v10;
        XDCOBJ::bAddColorTransform(a2, v9);
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
      DCOBJ::~DCOBJ((DCOBJ *)v24);
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22, v17, v18, v19);
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
