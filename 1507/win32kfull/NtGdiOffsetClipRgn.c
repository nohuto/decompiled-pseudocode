/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C0291D00
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C001D448 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  int v9; // [rsp+30h] [rbp-81h]
  __int64 v10; // [rsp+38h] [rbp-79h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-69h] BYREF
  DC *v13[6]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v14[112]; // [rsp+88h] [rbp-29h] BYREF
  struct _POINTL v15; // [rsp+130h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = 0;
  if ( v13[0] && *((_WORD *)v13[0] + 6) <= 1u )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v13, 1);
    if ( (v14[24] & 1) != 0 )
    {
      v6 = *((_QWORD *)v13[0] + 28);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 32) > 1u )
        {
          v11 = *((_QWORD *)v13[0] + 28);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8, *(_DWORD *)(v6 + 80));
          if ( !v8 )
          {
            EngSetLastError(8u);
            if ( v9 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
            goto LABEL_18;
          }
          RGNOBJ::vCopy((RGNOBJ *)&v8, (struct RGNOBJ *)&v11);
          v6 = v8;
          ++*(_DWORD *)(v8 + 32);
          --*(_DWORD *)(v11 + 32);
          *((_QWORD *)v13[0] + 28) = v6;
          if ( v9 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
        }
        v10 = v6;
        v15.x = a2;
        v15.y = a3;
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v13, 0x204u);
        if ( ((*(_DWORD *)(v12[0] + 32LL) & 2) != 0
           || EXFORMOBJ::bXform((EXFORMOBJ *)v12, (struct _VECTORL *)&v15, (struct _VECTORL *)&v15, 1uLL))
          && RGNOBJ::bOffset((RGNOBJ *)&v10, &v15) )
        {
          DC::bTightenRao(v13[0]);
          DC::vUpdate_VisRect(v13[0], *((struct REGION **)v13[0] + 193));
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v10);
        }
        else
        {
          EngSetLastError(0x3EBu);
        }
        goto LABEL_18;
      }
      v5 = 2;
    }
LABEL_18:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v14);
    goto LABEL_19;
  }
  EngSetLastError(6u);
LABEL_19:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v5;
}
