/*
 * XREFs of ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0165C60
 * Callers:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0165954 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0165A00 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0165EF0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0166A50 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTDR_DUMP_BUFFER::ShrinkLastSegment(CTDR_DUMP_BUFFER *this)
{
  __int16 v1; // ax
  __int64 v3; // r8
  int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  int v10; // ecx

  v1 = *((_WORD *)this + 10);
  if ( !v1 )
    return;
  v3 = *((_QWORD *)this + 1);
  v4 = 1;
  v5 = *(_DWORD *)(v3 + 4LL * (2 * (unsigned __int16)(v1 - 1) + 2));
  v6 = *((_DWORD *)this + 6) - v5;
  v7 = v3 + v5;
  if ( !v7 || !v6 )
    goto LABEL_9;
  v8 = v6 - 1;
  if ( (_DWORD)v8 )
  {
    while ( !*(_BYTE *)(v8 + v7) )
    {
      v9 = (_DWORD)v8 == 1;
      v8 = (unsigned int)(v8 - 1);
      if ( v9 )
        goto LABEL_7;
    }
    goto LABEL_8;
  }
LABEL_7:
  if ( !*(_BYTE *)(v8 + v7) )
  {
LABEL_9:
    v10 = 0;
    goto LABEL_10;
  }
LABEL_8:
  v10 = v8 + 1;
LABEL_10:
  if ( v10 )
    v4 = v10;
  *((_DWORD *)this + 6) = v4 + v5;
}
