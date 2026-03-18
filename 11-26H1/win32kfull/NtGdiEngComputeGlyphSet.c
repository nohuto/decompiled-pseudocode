/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x140205DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     EngComputeGlyphSet @ 0x140184290 (EngComputeGlyphSet.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x140205E80 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(__int64 nCodePage, INT nFirstChar, INT cChars)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  INT v7; // r15d
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v9; // r14
  FD_GLYPHSET *v10; // rax
  struct _FD_GLYPHSET *v11; // rsi
  unsigned int cjThis; // ebp
  __int64 v14; // rax
  UMPDOBJ *v15[4]; // [rsp+20h] [rbp-78h] BYREF
  UMPDOBJ *v16; // [rsp+40h] [rbp-58h]

  v3 = 0LL;
  v5 = 0LL;
  v7 = nCodePage;
  CurrentThread = GreGetCurrentThread(nCodePage);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v15, CurrentThread);
  v9 = v16;
  if ( v16 )
  {
    v10 = EngComputeGlyphSet(v7, nFirstChar, cChars);
    v11 = v10;
    if ( v10 )
    {
      cjThis = v10->cjThis;
      if ( v10->cjThis )
      {
        v14 = (__int64)UMPDOBJ::_AllocUserMem(v9, cjThis, 0);
        v5 = v14;
        if ( v14 )
          v5 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v14, v11, cjThis) != 0) & v14;
      }
      EngFreeMem(v11);
    }
    v3 = v5;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
  return v3;
}
