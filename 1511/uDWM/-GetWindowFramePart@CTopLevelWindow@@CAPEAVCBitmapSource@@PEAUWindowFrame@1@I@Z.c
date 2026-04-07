/*
 * XREFs of ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x18007DBF0
 * Callers:
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x180083050 (-Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetWindowFramePart(
        struct CTopLevelWindow::WindowFrame *a1,
        unsigned int a2)
{
  struct CBitmapSource *result; // rax

  result = (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 186);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) )
  {
    if ( *((_QWORD *)a1 + 2 * a2 + 187) )
      return (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 187);
  }
  return result;
}
