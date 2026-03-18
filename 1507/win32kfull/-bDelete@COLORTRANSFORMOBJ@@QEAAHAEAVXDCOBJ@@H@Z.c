/*
 * XREFs of ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0286B70
 * Callers:
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1C00D8AE0 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286D04 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B03C0 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0286CB0 (-bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 */

__int64 __fastcall COLORTRANSFORMOBJ::bDelete(COLORTRANSFORMOBJ *this, struct XDCOBJ *a2, int a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // edi
  void *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned int (__fastcall *v12)(_QWORD, __int64); // rax
  char v14; // [rsp+20h] [rbp-A8h]
  _BYTE v15[32]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v16[80]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+8h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    v8 = (void *)*v3;
    v14 = 14;
    if ( (unsigned int)HmgRemoveObject(*v3, 0LL, 1LL, 1LL, v14, 0LL) )
    {
      v9 = *((_QWORD *)this + 4);
      v10 = *(_QWORD *)(v9 + 24);
      if ( v10 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        v17 = v11;
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 56) & 0x8000) != 0 && a3 )
          {
            *(_QWORD *)(v9 + 24) = 0LL;
          }
          else
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15, (struct PDEVOBJ *)&v17);
            v12 = *(unsigned int (__fastcall **)(_QWORD, __int64))(v11 + 3240);
            if ( v12 )
            {
              if ( v12(*(_QWORD *)(v11 + 1824), v10) || (*(_DWORD *)(v11 + 56) & 0x8000) != 0 )
                *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
            DCOBJ::~DCOBJ((DCOBJ *)v16);
          }
        }
      }
      if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) )
      {
        XDCOBJ::bRemoveColorTransform(a2, v8);
        FreeObject(*((_QWORD *)this + 4), 14LL);
        *((_QWORD *)this + 4) = 0LL;
      }
    }
    return 1;
  }
  return v4;
}
