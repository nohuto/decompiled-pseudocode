/*
 * XREFs of ?UnRegisterNNotifiersInternal@CVisualGroup@@AEAAXPEAPEAVCVisual@@I@Z @ 0x1801073A8
 * Callers:
 *     ?RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z @ 0x180107140 (-RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z.c)
 *     ?UnRegisterNotifiers@CVisualGroup@@UEAAXXZ @ 0x180107450 (-UnRegisterNotifiers@CVisualGroup@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualGroup::UnRegisterNNotifiersInternal(CVisualGroup *this, struct CVisual **a2, unsigned int a3)
{
  __int64 v5; // r11
  _QWORD *v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // edx
  CVisualGroup **v9; // rcx
  __int64 v10; // r10
  __int64 i; // rcx
  __int64 v12; // rdx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = *a2;
      v7 = 0;
      v8 = *((_DWORD *)*a2 + 196);
      v9 = (CVisualGroup **)*((_QWORD *)*a2 + 95);
      if ( v8 )
      {
        do
        {
          if ( this == *v9 )
            break;
          ++v7;
          ++v9;
        }
        while ( v7 < v8 );
      }
      if ( v7 < v8 )
      {
        v10 = v6[95];
        for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
        {
          if ( this == *(CVisualGroup **)(v10 + 8 * i) )
            break;
        }
        if ( (unsigned int)i < v8 )
        {
          if ( (unsigned int)i < v8 - 1 )
          {
            do
            {
              v12 = (unsigned int)(i + 1);
              *(_QWORD *)(v10 + 8 * i) = *(_QWORD *)(v10 + 8 * v12);
              i = v12;
            }
            while ( (unsigned int)v12 < *((_DWORD *)v6 + 196) - 1 );
          }
          --*((_DWORD *)v6 + 196);
        }
      }
      *a2++ = 0LL;
      --v5;
    }
    while ( v5 );
  }
}
