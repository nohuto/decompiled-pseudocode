/*
 * XREFs of _GetMenuDefaultItem @ 0x140302918
 * Callers:
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int i; // ebx
  int v5; // edx
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v7);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 88);
  for ( i = 0; i < *(_DWORD *)(v2 + 44); ++i )
  {
    v5 = *(_DWORD *)(*(_QWORD *)v3 + 4LL);
    if ( (v5 & 0x1000) != 0 && (v5 & 3) == 0 )
      goto LABEL_7;
    v3 += 96LL;
  }
  i = -1;
LABEL_7:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v7);
  return (unsigned int)i;
}
