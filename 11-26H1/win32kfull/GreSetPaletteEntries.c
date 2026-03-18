/*
 * XREFs of GreSetPaletteEntries @ 0x14017E780
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14004129C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x14028FF38 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreSetPaletteEntries(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // esi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  Gre::Base *v10; // rcx
  HSEMAPHORE v11; // rbx
  HDC v12; // rdi
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  HSEMAPHORE v17; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+30h] [rbp-40h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v16, a1);
  if ( v16 )
  {
    v9 = Gre::Base::Globals(v8);
    SEMOBJ<13>::SEMOBJ<13>(&v17, v9);
    v7 = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v16, a2, a3, a4);
    v11 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v10) + 1512LL);
    GreAcquireSemaphoreInternal(v11);
    GrepAcquireLockValidate<20>();
    v12 = *(HDC *)(v16 + 40);
    while ( v12 )
    {
      DCOBJA::DCOBJA((DCOBJA *)v18, v12);
      if ( !v18[0] )
      {
        DCOBJA::~DCOBJA((DCOBJA *)v18);
        break;
      }
      *(_DWORD *)(v18[0] + 316LL) |= 0xFu;
      v12 = *(HDC *)(v18[0] + 984LL);
      DCOBJA::~DCOBJA((DCOBJA *)v18);
    }
    if ( v11 )
    {
      EtwTraceGreLockReleaseSemaphore(L"Hmgr", v11);
      GrepReleaseLockValidate<20>();
      GreReleaseSemaphoreExclusiveInternal(v11);
    }
    SEMOBJ<13>::vUnlock(&v17);
    if ( v16 )
    {
      v14 = Gre::Base::Globals(v13);
      DEC_SHARE_REF_CNT(v14, v16);
    }
  }
  return v7;
}
