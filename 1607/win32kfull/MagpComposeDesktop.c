/*
 * XREFs of MagpComposeDesktop @ 0x1C0093C90
 * Callers:
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QEAAJXZ @ 0x1C01DAFDC (-Save@CSmartFloatingSave@@QEAAJXZ.c)
 *     DwmAsyncMagnCreate @ 0x1C025BE84 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C025BFE4 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C025C2A4 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C025C38C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C025C484 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagpComposeDesktop(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *i; // rsi
  __int64 *j; // rdi
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  char v18; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 224) )
  {
    v5 = (void *)ReferenceDwmApiPort(a1, a2, a3, a4);
    DwmAsyncMagnSetDesktopColorTransform(v5);
  }
  result = CSmartFloatingSave::Save((CSmartFloatingSave *)&v18);
  if ( (int)result >= 0 )
  {
    for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
    {
      for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
      {
        v12 = j[3];
        if ( v12 != -1 )
        {
          v13 = (void *)ReferenceDwmApiPort(v12, v7, v8, v9);
          DwmAsyncMagnCreate(v13);
          if ( (j[2] & 4) != 0 )
          {
            v15 = (void *)ReferenceDwmApiPort(v14, v7, v8, v9);
            DwmAsyncMagnSetWindowColorTransform(v15);
          }
          if ( (j[2] & 8) != 0 )
          {
            v16 = (void *)ReferenceDwmApiPort(v14, v7, v8, v9);
            DwmAsyncMagnSetWindowFilterList(v16);
          }
          result = *((unsigned int *)j + 4);
          if ( (result & 0x10) != 0 )
          {
            v17 = (void *)ReferenceDwmApiPort(v14, v7, v8, v9);
            result = DwmAsyncMagnSetWindowSharedTextures(v17);
          }
        }
        *((_DWORD *)j + 4) &= ~0x20u;
      }
    }
  }
  return result;
}
