/*
 * XREFs of ?CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E729C
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 */

__int64 __fastcall CrossedTPDragThreshold(
        struct tagTPCONTACTSTATE *a1,
        struct tagTPSTATE *a2,
        struct tagPOINT a3,
        struct tagHID_POINTER_DEVICE_INFO *a4)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  unsigned int v7; // r9d
  __int64 v8; // r11
  int v9; // edx
  int v10; // r9d
  char *v11; // r11
  int v12; // eax
  int v13; // r10d
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // eax
  int v17; // r10d
  __int64 v18; // rcx

  v4 = 0;
  v5 = (_DWORD *)((char *)a2 + 264);
  v7 = 0;
  v8 = 6LL;
  do
  {
    if ( (*v5 & 1) != 0 && (*v5 & 0x800000) == 0 )
      ++v7;
    v5 += 68;
    --v8;
  }
  while ( v8 );
  v9 = *((_DWORD *)a1 + 66);
  if ( (v9 & 0x200000) != 0 )
  {
    if ( (dword_1C0328110 & 0x40) != 0 && (int)HIDWORD(*(_QWORD *)a1) >= *((_DWORD *)a2 + 471) && (v9 & 0x100000) != 0 )
    {
      v10 = dword_1C0328128;
      v11 = (char *)a1 + 248;
      v12 = dword_1C0328130;
      v13 = qword_1C0328134;
LABEL_17:
      v15 = (unsigned int)(v10 * v10);
      v16 = v12 * v12;
      v17 = v13 * v13;
      goto LABEL_19;
    }
    if ( (dword_1C0328110 & 0x10) != 0 && (v9 & 0x80000) != 0 && v7 <= 1 )
    {
      v14 = *((_DWORD *)a2 + 480);
      if ( (v14 & 0x800) == 0 && (v14 & 0x800000) == 0 )
      {
        v10 = dword_1C0328114;
        v11 = (char *)a1 + 232;
        v12 = dword_1C032811C;
        v13 = dword_1C0328120;
        goto LABEL_17;
      }
    }
  }
  v16 = dword_1C03280D8;
  v11 = (char *)a1 + 216;
  v15 = (unsigned int)dword_1C03280D4;
  v17 = dword_1C03280D8;
LABEL_19:
  if ( (dword_1C0328110 & 1) != 0 )
  {
    LOBYTE(v4) = !PtInRect(v11, *(_QWORD *)&a3);
  }
  else
  {
    v18 = *(_QWORD *)a1;
    if ( SHIDWORD(v18) < a3.y )
      v16 = v17;
    LOBYTE(v4) = (unsigned __int64)v16 * ((int)v18 - a3.x) * ((int)v18 - a3.x)
               + v15 * (HIDWORD(v18) - a3.y) * (HIDWORD(v18) - a3.y) >= (unsigned __int64)v16 * v15;
  }
  return v4;
}
