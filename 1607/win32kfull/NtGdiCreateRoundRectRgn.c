/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C0013A20
 * Callers:
 *     <none>
 * Callees:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0013B98 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C001443C (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C004A118 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 */

HRGN __fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r8d
  HRGN v11; // rbx
  ULONG v12; // ecx
  HRGN v14; // rdi
  unsigned __int64 v15; // [rsp+28h] [rbp-A9h] BYREF
  int v16; // [rsp+30h] [rbp-A1h]
  int v17; // [rsp+34h] [rbp-9Dh]
  _QWORD v18[16]; // [rsp+38h] [rbp-99h] BYREF
  _DWORD v19[20]; // [rsp+B8h] [rbp-19h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
  v11 = 0LL;
  if ( v18[1] )
  {
    v15 = __PAIR64__(a2, a1);
    v16 = a3;
    v17 = a4;
    if ( ((a1 & 0xF8000000) == 0 || (a1 & 0xF8000000) == -134217728)
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      EBOX::EBOX((EBOX *)v19, (struct ERECTL *)&v15, v10);
      if ( v19[0] )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
        if ( v15 )
        {
LABEL_14:
          v14 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v15);
          if ( !v14 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !(unsigned int)bRoundRect((struct EPATHOBJ *)v18, (struct EBOX *)v19, a5, a6)
          || !EPATHOBJ::bFlatten((EPATHOBJ *)v18) )
        {
          EngSetLastError(8u);
          v14 = 0LL;
LABEL_18:
          v11 = v14;
          goto LABEL_5;
        }
        v15 = 0LL;
        v16 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v18, 1u, 0LL);
        if ( v15 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v15);
          goto LABEL_14;
        }
      }
      EngSetLastError(8u);
      v14 = 0LL;
LABEL_16:
      if ( v16 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
      goto LABEL_18;
    }
    v12 = 87;
  }
  else
  {
    v12 = 8;
  }
  EngSetLastError(v12);
LABEL_5:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
  return v11;
}
