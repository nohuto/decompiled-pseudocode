/*
 * XREFs of ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C028D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C028AAAC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C028CFD8 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1C028D02C (--1REDIROPEN@@QEAA@XZ.c)
 */

__int64 __fastcall RedirDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  void *v12; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v17; // [rsp+40h] [rbp-A8h] BYREF
  struct SURFACE *v18; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v20[80]; // [rsp+70h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+F0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v18, a1);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v10 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v10 + 56) & 0x20000) != 0 )
        {
          v11 = **(_QWORD ***)(v10 + 1824);
          if ( v11 )
          {
            v12 = a6;
            v13 = a5;
            do
            {
              v14 = v11[6];
              HDEV = v14;
              if ( v14 )
              {
                if ( (*(_DWORD *)(v14 + 1848) & 0x8000000) != 0 && (*(_DWORD *)(v14 + 2152) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v14 + 1816) + 264LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v17,
                      (struct PDEVOBJ *)&HDEV,
                      a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(*(_QWORD *)(v15 + 1816) + 264LL))(
                      a1,
                      a2,
                      a3,
                      a4,
                      v13,
                      v12);
                    if ( v17 )
                      *(_WORD *)(v17 + 78) &= ~0x8000u;
                  }
                }
              }
              v11 = (_QWORD *)*v11;
            }
            while ( v11 );
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
        DCOBJ::~DCOBJ((DCOBJ *)v20);
      }
    }
  }
  REDIROPEN::~REDIROPEN(&v18);
  return 0LL;
}
