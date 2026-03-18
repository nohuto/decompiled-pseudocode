/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C007C284
 * Callers:
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79C4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 *     GreAccNotifyWindow @ 0x1C007C680 (GreAccNotifyWindow.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v4; // ebx
  _QWORD *Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi

  v4 = 0;
  Prop = (_QWORD *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (_QWORD *)v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomLayer, v10, 1) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v4;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    Prop[2] = 0LL;
    Prop[3] = 0LL;
    if ( (HBITMAP)*Prop != a2 )
    {
      GreAccNotifyWindow(*Prop, 0LL);
      GreAccNotifyWindow(a2, *(_QWORD *)a1);
      *Prop = a2;
    }
  }
  else if ( a3 )
  {
    v11 = (_QWORD *)InternalRemoveProp(a1, (unsigned __int16)atomLayer, 1LL);
    v12 = v11;
    if ( v11 )
    {
      v8 = *v11;
      DeleteMaybeSpecialRgn(v11[5]);
      Win32FreePool(v12);
LABEL_6:
      if ( v8 )
        GreAccNotifyWindow(v8, 0LL);
    }
  }
  else if ( Prop )
  {
    v8 = *Prop;
    *Prop = 0LL;
    Prop[2] = 0LL;
    Prop[3] = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
