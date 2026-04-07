/*
 * XREFs of ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x18003F084
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::GetFinalMinRect(struct tagRECT *a1, float a2, struct MilPointAndSizeF *a3)
{
  CDesktopManager *v3; // rdx
  int v5; // eax
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float left; // xmm0_4

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = a1->right - a1->left;
  if ( v5 < 0 )
    v5 = 0;
  v6 = (float)v5 * *((float *)CDesktopManager::s_pDesktopManagerInstance + 393);
  *((float *)a3 + 2) = v6;
  v7 = v6 * *((float *)v3 + 394);
  v8 = v6 * a2;
  left = (float)a1->left;
  *((float *)a3 + 3) = v8;
  *(float *)a3 = v7 + left;
  *((float *)a3 + 1) = (float)a1->top - v8;
}
