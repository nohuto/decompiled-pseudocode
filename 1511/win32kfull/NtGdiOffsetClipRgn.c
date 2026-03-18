/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C0291870
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0027B7C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  DC *v8[2]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+38h] [rbp-31h]
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v14[80]; // [rsp+60h] [rbp-9h] BYREF
  struct _POINTL v15; // [rsp+E8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v5 = 0;
  if ( v8[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v8, 1);
    if ( (v14[24] & 1) != 0 )
    {
      v6 = *((_QWORD *)v8[0] + 28);
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 32) > 1u )
        {
          v12 = *((_QWORD *)v8[0] + 28);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9, *(_DWORD *)(v6 + 80));
          if ( !v9 )
          {
            EngSetLastError(8u);
            if ( v10 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
            goto LABEL_17;
          }
          RGNOBJ::vCopy((RGNOBJ *)&v9, (struct RGNOBJ *)&v12);
          v6 = v9;
          ++*(_DWORD *)(v9 + 32);
          --*(_DWORD *)(v12 + 32);
          *((_QWORD *)v8[0] + 28) = v6;
          if ( v10 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
        }
        v11 = v6;
        v15.x = a2;
        v15.y = a3;
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v8, 0x204u);
        if ( ((*(_DWORD *)(v13[0] + 32LL) & 2) != 0
           || EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct _VECTORL *)&v15, (struct _VECTORL *)&v15, 1uLL))
          && RGNOBJ::bOffset((RGNOBJ *)&v11, &v15) )
        {
          DC::bTightenRao(v8[0]);
          DC::vUpdate_VisRect(v8[0], *((struct REGION **)v8[0] + 190));
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v11);
        }
        else
        {
          EngSetLastError(0x3EBu);
        }
        goto LABEL_17;
      }
      v5 = 2;
    }
LABEL_17:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
    goto LABEL_18;
  }
  EngSetLastError(6u);
LABEL_18:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  return v5;
}
