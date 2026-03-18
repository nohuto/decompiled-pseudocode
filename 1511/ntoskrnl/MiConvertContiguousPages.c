/*
 * XREFs of MiConvertContiguousPages @ 0x1400BFF60
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 */

void __fastcall MiConvertContiguousPages(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  char v7; // cl
  unsigned int v8; // eax
  bool v9; // zf
  _QWORD *v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0LL;
  v5 = a1 + 48 * a2;
  v6 = a1;
  if ( a1 != v5 )
  {
    do
    {
      if ( *(unsigned __int8 *)(v6 + 34) >> 6 != a3 )
      {
        if ( a3 == 1
          && ((*(_BYTE *)(v6 + 34) & 0xC0) == 0xC0
           || (v7 = *(_BYTE *)(v6 + 31) & 0xF,
               _InterlockedOr(v11, 0),
               v8 = ((_BYTE)KiTbFlushTimeStamp - v7) & 0xF,
               v8 > 2)
           || (v7 & 1) == 0 && v8 >= 2) )
        {
          MiChangePageAttribute(v6, 1, 4u);
        }
        else
        {
          v9 = *(_QWORD *)(v6 + 16) == 0LL;
          *(_QWORD *)(v6 + 16) = v3;
          v3 = (_QWORD *)v6;
          *(_QWORD *)v6 = !v9;
        }
      }
      v6 += 48LL;
    }
    while ( v6 != v5 );
    if ( v3 )
    {
      MiChangePageAttributeBatch(v3, a3, -1LL);
      do
      {
        v10 = (_QWORD *)v3[2];
        v3[2] = *v3 != 0LL ? 0x80 : 0;
        v3 = v10;
      }
      while ( v10 );
    }
  }
}
