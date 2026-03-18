/*
 * XREFs of NtGdiResizePalette @ 0x140256060
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14017EDC0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401807C4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0PALDCOBJs@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@PEAVDC@@@Z @ 0x1402562E8 (--0PALDCOBJs@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@PEAVDC@@@Z.c)
 *     ?bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z @ 0x1402620A0 (-bSwap@XEPALOBJ@@QEAAHPEAPEAVPALETTE@@KK@Z.c)
 *     ??1PALDCOBJs@@QEAA@XZ @ 0x14028F578 (--1PALDCOBJs@@QEAA@XZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiResizePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v3; // edi
  Gre::Base *v4; // rcx
  struct PALETTE *v5; // rax
  bool v6; // zf
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // r8
  Gre::Base *v12; // rcx
  HSEMAPHORE v13; // rsi
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // r9
  struct PALETTE *v19; // r8
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  int v22; // [rsp+58h] [rbp-11h]
  _BYTE v23[32]; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v24; // [rsp+80h] [rbp+17h]
  __int64 *v25; // [rsp+88h] [rbp+1Fh]
  char v26; // [rsp+A0h] [rbp+37h]
  struct PALETTE *v27; // [rsp+E0h] [rbp+77h] BYREF
  HSEMAPHORE v28; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( a2 - 1 > 0x3FF )
    return 0LL;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v27, a1);
  v5 = v27;
  if ( v27 )
  {
    if ( (*((_DWORD *)v27 + 6) & 0x100) != 0 )
    {
      v6 = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v27) == 0;
      v5 = v27;
      if ( v6 )
      {
        if ( (*((_DWORD *)v27 + 6) & 0x800) != 0 && a2 != 256 )
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v27);
          return 0LL;
        }
        v22 = 0;
        v21 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v21, 1u, a2, 0LL, 0, 0, 0, 0x500u, 1) )
        {
          v9 = Gre::Base::Globals(v8);
          SEMOBJ<13>::SEMOBJ<13>(&v28, v9);
          v10 = *(_DWORD *)(v21 + 28);
          v11 = *((unsigned int *)v27 + 7);
          if ( (unsigned int)v11 >= v10 )
            v11 = v10;
          memmove(*(void **)(v21 + 112), *((const void **)v27 + 14), 4 * v11);
          *(_DWORD *)(v21 + 24) = *((_DWORD *)v27 + 6);
          *(_QWORD *)(v21 + 40) = *((_QWORD *)v27 + 5);
          *(_QWORD *)(v21 + 48) = *((_QWORD *)v27 + 6);
          *(_DWORD *)(v21 + 56) = *((_DWORD *)v27 + 14);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v21);
          v13 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v12) + 1512LL);
          GreAcquireSemaphoreInternal(v13);
          GrepAcquireLockValidate<20>();
          PALDCOBJs::PALDCOBJs((PALDCOBJs *)v23, v9, *(HDC *)(v21 + 40), 0LL);
          if ( v26 )
          {
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v27);
            XEPALOBJ::vUpdateTime((XEPALOBJ *)&v27);
            v3 = XEPALOBJ::bSwap((XEPALOBJ *)&v21, &v27, v14, v15);
            if ( v3 )
            {
              v16 = v24;
              v17 = v25;
              while ( v16 != v17 )
              {
                v18 = *v16;
                v19 = v27;
                *(_DWORD *)(v18 + 316) |= 0xFu;
                ++v16;
                *(_QWORD *)(v18 + 88) = v19;
              }
            }
          }
          PALDCOBJs::~PALDCOBJs((PALDCOBJs *)v23);
          if ( v13 )
          {
            EtwTraceGreLockReleaseSemaphore(L"Hmgr", v13);
            GrepReleaseLockValidate<20>();
            GreReleaseSemaphoreExclusiveInternal(v13);
          }
          SEMOBJ<13>::vUnlock(&v28);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v21);
        v5 = v27;
      }
    }
    if ( v5 )
    {
      v20 = Gre::Base::Globals(v4);
      DEC_SHARE_REF_CNT(v20, v27);
    }
  }
  return v3;
}
