/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C00168A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C00167DC (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0018C50 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00368D0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 */

HRGN __fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  HRGN v10; // rbx
  ULONG v11; // ecx
  HRGN v12; // rdi
  unsigned __int64 v14; // [rsp+28h] [rbp-A9h] BYREF
  int v15; // [rsp+30h] [rbp-A1h]
  int v16; // [rsp+34h] [rbp-9Dh]
  _QWORD v17[16]; // [rsp+38h] [rbp-99h] BYREF
  _DWORD v18[20]; // [rsp+B8h] [rbp-19h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v17);
  v10 = 0LL;
  if ( v17[1] )
  {
    v14 = __PAIR64__(a2, a1);
    v15 = a3;
    v16 = a4;
    if ( ((a1 & 0xF8000000) == 0 || (a1 & 0xF8000000) == -134217728)
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      EBOX::EBOX((EBOX *)v18, (struct ERECTL *)&v14);
      if ( v18[0] )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
        if ( v14 )
        {
LABEL_13:
          v12 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
          if ( !v12 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
          goto LABEL_15;
        }
      }
      else
      {
        if ( !(unsigned int)bRoundRect((struct EPATHOBJ *)v17, (struct EBOX *)v18, a5, a6)
          || !EPATHOBJ::bFlatten((EPATHOBJ *)v17) )
        {
          EngSetLastError(8u);
          v12 = 0LL;
LABEL_17:
          v10 = v12;
          goto LABEL_18;
        }
        v15 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v17, 1u, 0LL);
        if ( v14 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v14);
          goto LABEL_13;
        }
      }
      EngSetLastError(8u);
      v12 = 0LL;
LABEL_15:
      if ( v15 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v14);
      goto LABEL_17;
    }
    v11 = 87;
  }
  else
  {
    v11 = 8;
  }
  EngSetLastError(v11);
LABEL_18:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v17);
  return v10;
}
