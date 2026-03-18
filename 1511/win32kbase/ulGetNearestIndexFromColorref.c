/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1C00729D0
 * Callers:
 *     GreGetNearestColor @ 0x1C0046DA0 (GreGetNearestColor.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005BCB0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C00237B4 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 */

__int64 __fastcall ulGetNearestIndexFromColorref(__int64 a1, struct _SINGLE_LIST_ENTRY *a2, tagPALETTEENTRY a3, int a4)
{
  struct _SINGLE_LIST_ENTRY *v5; // r10
  tagPALETTEENTRY v6; // edx
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r9
  struct _SINGLE_LIST_ENTRY *v9; // r8
  struct _SINGLE_LIST_ENTRY *v10; // [rsp+20h] [rbp-10h] BYREF
  struct _SINGLE_LIST_ENTRY *v11; // [rsp+40h] [rbp+10h] BYREF
  struct _SINGLE_LIST_ENTRY *v12; // [rsp+48h] [rbp+18h] BYREF
  tagPALETTEENTRY v13; // [rsp+50h] [rbp+20h]

  v12 = a2;
  v11 = (struct _SINGLE_LIST_ENTRY *)a1;
  v13 = a3;
  v5 = (struct _SINGLE_LIST_ENTRY *)a1;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 0x800) != 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
    {
      v13.peFlags = 0;
      if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
      {
        result = (unsigned int)v13;
        if ( *(unsigned int *)&v13 >= HIDWORD(a2[3].Next) )
          result = 0LL;
      }
      else
      {
        result = XEPALOBJ::ulGetNearestFromPalentry(&v12, v13, a4);
        a2 = v12;
        v5 = v11;
      }
      Next = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
      if ( a2 == WPP_MAIN_CB.Dpc.DpcListEntry.Next )
        goto LABEL_29;
      if ( v5 )
        v9 = a2[10].Next;
      else
        v9 = a2[9].Next;
      if ( v9 )
        return *((unsigned __int8 *)&v9->Next + (unsigned int)result + 4);
      a3 = (tagPALETTEENTRY)*((_DWORD *)&a2[16].Next->Next + (unsigned int)result);
      v13 = a3;
      if ( a3.peFlags == 2 )
        return a3.peRed;
    }
    else
    {
      Next = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
    }
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return a3.peRed;
    v13.peFlags = 0;
    result = (unsigned int)v13;
    if ( v13 == 0xFFFFFF )
    {
      LODWORD(result) = 19;
      return (unsigned int)(result + 236);
    }
    if ( v13 )
    {
      v10 = Next;
      result = XEPALOBJ::ulGetNearestFromPalentry(&v10, v13, a4);
    }
LABEL_29:
    if ( (unsigned int)result < 0xA )
      return result;
    return (unsigned int)(result + 236);
  }
  if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
  {
    v6 = (tagPALETTEENTRY)*((_DWORD *)&a2[16].Next->Next
                          + (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < HIDWORD(a2[3].Next))));
  }
  else
  {
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return a3.peRed & (unsigned int)-((unsigned int)a3.peRed < *(_DWORD *)(a1 + 28));
    v13.peFlags = 0;
    v6 = v13;
  }
  return XEPALOBJ::ulGetNearestFromPalentry(&v11, v6, a4);
}
