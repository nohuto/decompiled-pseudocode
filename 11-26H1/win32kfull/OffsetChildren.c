/*
 * XREFs of OffsetChildren @ 0x1400186DC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     OffsetWindow @ 0x140018874 (OffsetWindow.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401F43FC (ScaleDpiOffsetWithSubpixel.c)
 */

__int64 __fastcall OffsetChildren(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax
  float *v15; // rdx
  int v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+24h] [rbp-44h]
  __int128 v18; // [rsp+28h] [rbp-40h] BYREF
  int v19; // [rsp+70h] [rbp+8h]

  v18 = 0LL;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    result = DirtyVisRgnTrackers(a1);
  v9 = *((_QWORD *)a1 + 14);
  if ( v9 )
  {
    v10 = 0;
    v19 = a3;
    v11 = a2;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(&v18, a4, *(_QWORD *)(v9 + 40) + 88LL) )
        goto LABEL_18;
      v12 = *(_QWORD *)(v9 + 40);
      v13 = *((_QWORD *)a1 + 5);
      v14 = *(_DWORD *)(v12 + 288);
      if ( *(_QWORD *)(v12 + 256) == *(_QWORD *)(v13 + 256) )
      {
        v15 = (float *)(v9 + 224);
        if ( (((unsigned __int16)(v14 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v13 + 288) >> 8)) & 0x1FF) == 0 )
          goto LABEL_9;
      }
      else
      {
        if ( (v14 & 0xF) == 2 && (*(_DWORD *)(v13 + 288) & 0xF) == 2 )
        {
          v15 = (float *)(v9 + 224);
LABEL_9:
          *v15 = *((float *)a1 + 56);
          *(_DWORD *)(v9 + 228) = *((_DWORD *)a1 + 57);
          goto LABEL_10;
        }
        v15 = (float *)(v9 + 224);
      }
      v16 = a2;
      v17 = a3;
      ScaleDpiOffsetWithSubpixel(&v16, v15, (struct tagWND *)v9, a1);
      a2 = v16;
      v10 = 1;
      a3 = v17;
LABEL_10:
      OffsetWindow((tagWND *)v9);
      if ( v10 )
      {
        a3 = v19;
        a2 = v11;
      }
      result = *(_QWORD *)(v9 + 112);
      v10 = 0;
      if ( !result )
      {
LABEL_18:
        while ( 1 )
        {
          result = *(_QWORD *)(v9 + 88);
          if ( result )
            break;
          v9 = *(_QWORD *)(v9 + 104);
          if ( (struct tagWND *)v9 == a1 )
            return result;
        }
      }
      v9 = result;
    }
  }
  return result;
}
